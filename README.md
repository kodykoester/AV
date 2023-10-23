<p align="center">
  <a href="" rel="noopener">
 <img width=400px height=400px src="https://github.com/kodykoester/AV/blob/main/IMG_5782.jpg" alt="Bot logo"></a>
</p>

<h1 align="center">Meet AV</h1>

<div align="center">

  [![Status](https://img.shields.io/badge/status-active-success.svg)]()
  [![Platform](https://img.shields.io/badge/platform-reddit-orange.svg)](https://www.reddit.com/user/Wordbook_Bot)
  [![GitHub Issues](https://img.shields.io/github/issues/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/issues)
  [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/pulls)
  [![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">Welcome to the GitHub repository for an Autonomous Vehicle developed by Kody Koester!<br>
This project is designed to demonstrate my skills and passion for the field of embedded hardware and software engineering to potential employers.
</p>

## 📝 Table of Contents
+ [About](#about)
+ [Demo / Working](#demo)
+ [How it works](#working)
+ [Usage](#usage)
+ [Getting Started](#getting_started)
+ [Deploying your own bot](#deployment)
+ [Built Using](#built_using)
+ [Future Enhancements](#Future_Enhancements)
+ [Contributing](../CONTRIBUTING.md)
+ [Authors](#authors)
+ [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>
This autonomous vehicle project is a showcase of my capabilities in designing, developing, and deploying embedded systems. 


Despite being a solo endeavor, I've created organized, structured, well-documented, maintainable, and reusable code suitable for high-volume manufacturing applications.


The vehicle is built using K'nex for the structural framework and Arduino Uno as the brain to control its movements. IR sensors are utilized for basic obstacle detection, and I am actively working on expanding its capabilities.


## 🎥 Demo / Working <a name = "demo"></a>
![Working](https://media.giphy.com/media/20NLMBm0BkUOwNljwv/giphy.gif)

## 💭 How it works <a name = "working"></a>

The bot first extracts the word from the comment and then fetches word definitions, part of speech, example and source from the Oxford Dictionary API.

If the word does not exist in the Oxford Dictionary, the Oxford API then returns a 404 response upon which the bot then tries to fetch results form the Urban Dictionary API.

The bot uses the Pushshift API to fetch comments, PRAW module to reply to comments and Heroku as a server.

The entire bot is written in Python 3.6

## 🎈 Usage <a name = "usage"></a>

To use the bot, type:
```
!dict word
```
The first part, i.e. "!dict" **is not** case sensitive.

The bot will then give you the Oxford Dictionary (or Urban Dictionary; if the word does not exist in the Oxford Dictionary) definition of the word as a comment reply.

### Example:

> !dict what is love

**Definition:**

Baby, dont hurt me~
Dont hurt me~ no more.

**Example:**

Dude1: Bruh, what is love?
Dude2: Baby, dont hurt me, dont hurt me- no more!
Dude1: dafuq?

**Source:** https://www.urbandictionary.com/define.php?term=what%20is%20love

---

<sup>Beep boop. I am a bot. If there are any issues, contact my [Master](https://www.reddit.com/message/compose/?to=PositivePlayer1&subject=/u/Wordbook_Bot)</sup>

<sup>Want to make a similar reddit bot? Check out: [GitHub](https://github.com/kylelobo/Reddit-Bot)</sup>

## 🏁 Getting Started <a name = "getting_started"></a>
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See [deployment](#deployment) for notes on how to deploy the project on a live system.

### Prerequisites

What things you need to install the software and how to install them.

```
Give examples
```

### Installing

A step by step series of examples that tell you how to get a development env running.

Say what the step will be

```
Give the example
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo.

## 🚀 Deploying your own bot <a name = "deployment"></a>
To see an example project on how to deploy your bot, please see my own configuration:

+ **Heroku**: https://github.com/kylelobo/Reddit-Bot#deploying_the_bot

## ⛏️ Built Using <a name = "built_using"></a>
+ [Arduino Uno](https://store.arduino.cc/products/arduino-uno-rev3/) - Arduino Uno Rev3
+ [Motor Shield](https://store.arduino.cc/products/arduino-motor-shield-rev3) - Motor Shield
+ [IR Sensor](https://www.amazon.com/HiLetgo-Infrared-Avoidance-Reflective-Photoelectric/dp/B07W97H2WS/ref=sr_1_3?crid=2M1U7RPV1RVJH&keywords=ir+sensors&qid=1697999804&sprefix=ir+sensors%2Caps%2C150&sr=8-3) - IR Sensors
+ 7.2v LiPo Battery
+ K'nex frame & motor
+ High-Quality Code: Despite being a one-person effort, the code is organized, structured, well-documented, and highly maintainable, suitable for scaling and manufacturing applications.


## Future Enhancements
In the near future, I plan to enhance this project with the following features:

Sonar Mapping: Incorporate sonar sensors to enable advanced room mapping capabilities.

Obstacle Avoidance: Further improve obstacle avoidance capabilities with advanced sensors and algorithms.

Machine Learning: Explore machine learning techniques to enhance decision-making and autonomy.

## ✍️ Authors <a name = "authors"></a>
+ [@kylelobo](https://github.com/kylelobo) - Idea & Initial work

See also the list of [contributors](https://github.com/kylelobo/The-Documentation-Compendium/contributors) who participated in this project.

## 🎉 Acknowledgements <a name = "acknowledgement"></a>
+ Hat tip to anyone whose code was used
+ Inspiration
+ References