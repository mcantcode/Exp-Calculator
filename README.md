# Exp Calculator

A script that calculates a rebirth amount to determine the earned Exp from punching rock in [Muscle Legends](https://www.roblox.com/games/3623096087/Muscle-Legends), a [Roblox](https://www.roblox.com/) game, and displays the result.

## Showcase

![](https://i.ibb.co.com/TqWnQn11/Exp-Calculator-Showcase.jpg)

## Features

* Simple, and easy to use.
* Lightweight, and optimized for performance.
* Uses an accurate formula to calculate Exp:

```
Exp = (rebirth-amount + 20) × rock's value
```

* Calculates a rebirth amount based on the latest rocks, such as the Ancient Jungle rock, Muscle King rock, etc.

## Installation

Before installing Exp Calculator, ensure Clang is installed. If not, install it first.

After installing Clang, open the command line and run the following command to clone the Exp Calculator GitHub repository:

```sh
git clone https://github.com/mcantcode/Exp-Calculator
```

## Usage

Before running the Exp Calculator, make sure you're in the correct directory. If not, use the following command:

```sh
cd Exp-Calculator
```

Once you're in the correct directory, compile Exp Calculator using Clang:

```sh
clang++ calculate.cpp -o calculate
```

After compiling, configure and run the program with:

```sh
./calculate [OPTION] <number>
```

Once the program is configured and executed, the results will be displayed.

## Options

| Option       | Description                         |
|--------------|-------------------------------------|
| `-r`         | Specify the amount of rebirths.     |
| `--rebirths` | Same as `-r`, but more descriptive. |

## Examples

```sh
./calculate -r 280
./calculate --rebirths 580
```

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
