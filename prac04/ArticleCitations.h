// export module article_citations;

// import <string>;
#include <string>
// import <string_view>;
#include <string_view>

using namespace std;

// export class ArticleCitations
class ArticleCitations
{
public:
	ArticleCitations(string_view filename);
	virtual ~ArticleCitations();
	ArticleCitations(const ArticleCitations& src);
	ArticleCitations& operator=(const ArticleCitations& rhs);

	const string& getArticle() const;
	int getNumCitations() const;
	const string& getCitation(int i) const;

private:
	void readFile(string_view filename);
	void copy(const ArticleCitations& src);

	string m_article;
	string* m_citations;
	int m_numCitations;
};
