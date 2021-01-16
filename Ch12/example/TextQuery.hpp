#ifndef _TEXT_QUERY_HPP
#define _TEXT_QUERY_HPP

#include <string>
#include <vector>
#include <set>
#include <map>
#include <memory>
#include <sstream>
#include <fstream>

#include "QueryResult.hpp"

class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;

    TextQuery(std::ifstream &);

    QueryResult 
    query(const std::string &) const;

private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};  // TextQuery_End


TextQuery::TextQuery(std::ifstream& is) : file(new std::vector<std::string>) {
    std::string text;
    while (std::getline(is, text)) {		    // read a line
        file->push_back(text);		            // save line
        int n = file->size() - 1;	            // current line_no
        std::istringstream line(text);
        std::string word;
        while (line >> word) {
            auto &lines = wm[word];	            // lines is a shared_ptr point to set of line_no
            if (!lines)
                lines.reset(new std::set<line_no>);	// new a set
            lines->insert(n);
        }
    }
}

QueryResult
TextQuery::query(const std::string &sought) const {
    //static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
    // if not found, destory by QueryResult-obj of return
    std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);   
    auto loc = wm.find(sought);
    if (loc == wm.end())
	    return QueryResult(sought, nodata, file);           // not found
    else 
	    return QueryResult(sought, loc->second, file);
}

#endif




























