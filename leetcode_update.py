import requests

def fetch_leetcode_status(username):
    url = f"https://leetcode.com/graphql"
    query = '''
    query {
      allQuestionsCount
      allSolutionsCount
      matchedUser(username: "%s") {
        ranking
        badges {
          name
          icon
        }
        submissionProgress {
          totalSubmissions
          acSubmissions
          waSubmissions
        }
        categoryQuestionCount {
          difficulty
          count
        }
      }
    }
    ''' % username
    headers = {
        "Content-Type": "application/json",
        "User-Agent": "Mozilla/5.0"
    }
    response = requests.post(url, headers=headers, json={"query": query})
    data = response.json()
    return data["data"]["matchedUser"]

def generate_markdown(username, leetcode_status):
    badges = "\n".join(f"![{badge['name']}]({badge['icon']})" for badge in leetcode_status['badges'])
    easy_count = next(item for item in leetcode_status['categoryQuestionCount'] if item['difficulty'] == "Easy")['count']
    medium_count = next(item for item in leetcode_status['categoryQuestionCount'] if item['difficulty'] == "Medium")['count']
    hard_count = next(item for item in leetcode_status['categoryQuestionCount'] if item['difficulty'] == "Hard")['count']
    
    markdown = f"""
    # Online Judge Solutions

Welcome to the Online Judge Solutions repository! My name is Dabananda Mitra, and I'm currently studying Computer Science and Engineering at the Institute of Science Trade & Technology (ISTT), 2019-2020 session. My graduation will complete in the middle of 2025.

This repository contains my daily solutions to programming problems from various online judges, where I primarily use C++.

The platforms where I solve problems include:

- [Codeforces](https://codeforces.com/profile/dabananda)
- [LeetCode](https://leetcode.com/u/dabananda/)
- [HackerRank](https://www.hackerrank.com/profile/dabananda)
- [Beecrowd](https://judge.beecrowd.com/en/profile/467832)
- [CodeChef](https://www.codechef.com/users/dabananda)
- [CodingNinjas](https://www.naukri.com/code360/profile/48a35475-0af2-4d4e-8f26-2d793b64843a)
- [Vjudge](https://vjudge.net/user/dabanandamitra)
- [UVa](https://uhunt.onlinejudge.org/id/1167157)

## LeetCode Profile Status

    - Username: {username}
    - Problems Solved: {leetcode_status['allSolutionsCount']}
    - Total Problems: {leetcode_status['allQuestionsCount']}
    - Ranking: {leetcode_status['ranking']}

    ### Badges
    {badges}

    ### Problem Counts by Difficulty
    - Easy: {easy_count}
    - Medium: {medium_count}
    - Hard: {hard_count}

These solutions cover a variety of problem types, including data structures, algorithms, dynamic programming, graph theory, and more. My goal is to become a software engineer, and solving problems regularly helps me to improve my skills and prepare for a career at a big tech company like Google, Meta, Microsoft, Amazon, or others.

I encourage you to explore my solutions, and if you have any questions or suggestions, feel free to connect with me:

- Emai: imdmitra@gmail.com
- LinkedIn: [Dabananda Mitra](https://www.linkedin.com/in/dabanandamitra/)
- Twitter: [@dabanandamitra](https://twitter.com/dabanandamitra)
- Facebook: [imdmitra](https://www.facebook.com/imdmitra)

Thank you for visiting my repository. I hope you find my solutions useful, and I look forward to connecting with you in the future.

    """
    return markdown.strip()

def update_readme(username):
    leetcode_status = fetch_leetcode_status(username)
    markdown_content = generate_markdown(username, leetcode_status)
    with open("README.md", "w") as readme_file:
        readme_file.write(markdown_content)

if __name__ == "__main__":
    username = "dabananda"
    update_readme(username)
