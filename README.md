# <p align="center">⭐Greeting-Time⭐</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<div id="top"></div>

<h2>Table of Contents🧾</h2>

- [Introduction📌](#introduction)
- [Technology Used🚀](#technology-used)
- [Overview⭐](#overview)
- [Getting Started💥](#getting-started)
- [Contributing Guidelines📑](#contributing-guidelines)
- [Code Of Conduct📑](#code-of-conduct)
- [Project Admin⚡](#project-admin)
- [Contributing is fun🧡](#contributing-is-fun)
<br>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Introduction📌</h2>

Greeting-Time is a console application that welcomes users with a personalized greeting based on the current time of day, provides a random motivational quote for inspiration, and fetches real-time weather information using an API request, keeping you informed and motivated throughout the day.

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Technology Used🚀</h2>

<p>
  <a href = "https://www.learncpp.com/"> <img src = "https://img.icons8.com/color/70/000000/c-plus-plus-logo.png"/> </a>
</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Overview⭐</h2>

<h3>1. The Time on the system is 09:00 AM</h3>
<img src = "https://github.com/Volcano-Dragon/Greeting-Time/assets/93902835/25f13e25-2acb-4293-9905-9c2a989ac149.png" alt = "Morning_temp"></img>

<h3>2. The Time on the system is 12:00 PM</h3>
<img src = "https://github.com/Volcano-Dragon/Greeting-Time/assets/93902835/ce435fd4-98d9-4070-b914-d174788b13a3.png" alt = "Afternoon_temp"></img>

<h3>3. The Time on the system is 08:00 PM</h3>
<img src = "https://github.com/Volcano-Dragon/Greeting-Time/assets/93902835/4c2295fa-2d7c-49da-8786-4bdd41bcd561.png" alt = "Evening_temp"></img>

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Getting Started💥</h2>

- Fork this Repository.
- Clone the forked repository in your local system.
```
git clone https://github.com/<your-github-username>/Greeting-Time.git
```
- Open the `GreetingTime.cpp` file in your local code editor.
- Run the code and you will see the greeting according to the time of your system.
- Raise an issue if you want to add a feature or fix a bug.
- Wait for the issue to be assigned and proceed only after the issue is assigned to you.
- Navigate to the project directory.
```
cd Greeting-Time
```
- Create a new branch for your feature.
```
git checkout -b <your_branch_name>
```
- Perfom your desired changes to the code base.
- Track and stage your changes.
```
# Track the changes
git status

# Add changes to Index
git add .
```
- Commit your changes.
```
git commit -m "your_commit_message"
```
- Push your committed changes to the remote repo.
```
git push origin <your_branch_name>
```
- Go to your forked repository on GitHub and click on `Compare & pull request`.
- Add an appropriate title and description to your pull request explaining your changes and efforts done.
- Click on `Create pull request`.
- Congrats! 🥳 You've made your first pull request to this project repo.
- Wait for your pull request to be reviewed and if required suggestions would be provided to improve it.
- Celebrate 🥳 your success after your pull request is merged successfully.
<p align="right">(<a href="#top">back to top</a>)</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Installation of Library📑</h2>

For fetching the details of wheather from an API request. The following two libraries are required to be installed:
- [curl/curl.h](https://curl.se)
- [nlohmann/json.hpp](https://github.com/nlohmann/json)

Installation:
- [curl/curl.h](https://everything.curl.dev/get)
- [Step-by-step installation of curl for Visual studio](https://stackoverflow.com/questions/53861300/how-do-you-properly-install-libcurl-for-use-in-visual-studio-2017)
- [nlohmann/json.hpp](https://github.com/nlohmann/json#integration)
<p align="right">(<a href="#top">back to top</a>)</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Additional files required for Program📑</h2>

Text files for printing the randomized quotes from the text file according to the current time:
- [Mo.txt](Mo.txt) (For Morning motivation quotes)
- [Af.txt](Af.txt) (For Afternoon motivation quotes)
- [Ev.txt](Ev.txt) (For Evening motivation quotes)
  
Text file for fetching the current wheater of a location:
- [cnf.txt](cnf.txt)

<h3>How to edit the text files</h3>

Editing quote text files:
- Make sure to add the hashtag "#" after the last quote so the program can stop reading further.
- Keep Serial number in format so the program can select the quotes randomly.

Editing the wheater location text file:
- Just replace the text only with your city name (like: Bhopal, Delhi)
- To change the location of country, please edit the URL (variable name = user_city) in the [source-code](GreetingTime.cpp#L43) <br>
 (like: "...&query="+ buffer +",%20Japan")
<p align="right">(<a href="#top">back to top</a>)</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Contributing Guidelines📑</h2>

Read our [Contributing Guidelines](https://github.com/Rakesh9100/Greeting-Time/blob/main/.github/CONTRIBUTING_GUIDELINES.md) to learn about our development process, how to propose bugfixes and improvements, and how to build to Greeting-Time.

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Code Of Conduct📑</h2>

This project and everyone participating in it is governed by the [Code of Conduct](https://github.com/Rakesh9100/Greeting-Time/blob/main/.github/CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code.
<p align="right">(<a href="#top">back to top</a>)</p>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Project Admin⚡</h2>

<table>
<tr>
<td align="center">
<a href="https://github.com/Rakesh9100/"><img src="https://avatars.githubusercontent.com/u/73993775?v=4" height="150px" width="150px" alt="Rakesh Roshan"></a><br><sub><b>Rakesh Roshan</b></sub>
</td>
</tr>
</table>

<!-- --------------------------------------------------------------------------------------------------------------------------------------------------------- -->

<h2>Contributing is fun🧡</h2>

[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
<h3>Contributions of any kind from anyone are always welcome🌟!!</h3>
<h3>Give it a 🌟 if you ❤ this project. Happy Coding👨‍💻</h3>
<p align="right">(<a href="#top">back to top</a>)</p>
