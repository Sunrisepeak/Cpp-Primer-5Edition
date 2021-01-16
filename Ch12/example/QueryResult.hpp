#ifndef _QUERY_RESULT_HPP
#define _QUERY_RESULT_HPP

#include <ostream>
#include <string>
#include <set>
#include <vector>
#include <memory>

class QueryResult {
    friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    using line_no = std::vector<std::string>::size_type;

    QueryResult(
        std::string s,
        std::shared_ptr<std::set<line_no>> p,
        std::shared_ptr<std::vector<std::string>> f
    ) : sought(s), lines(p), file(f) {}

private:
    std::string sought;                             // query word
    // share memory
    std::shared_ptr<std::set<line_no>> lines;	    // word corr.. line_no
    std::shared_ptr<std::vector<std::string>> file; //input file

    std::string 
    make_plural(int ctr, const std::string &word, const std::string &ending) const {
        return (ctr > 1) ? word + ending : word;
    }
};  // QueryResult_End


std::ostream & print(std::ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << qr.make_plural(qr.lines->size(), "time", "s") << std::endl;
    for (auto num : *qr.lines) {
        os << "\n(line" << num + 1 << ")"
        << *(qr.file->begin() + num) << std::endl;
    }
    return os;
}

#endif