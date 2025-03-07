# test.me [![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://github.com/ArielMAJ/test.me/blob/develop/LICENSE) [![test.me](https://github.com/ArielMAJ/test.me/actions/workflows/test.me.yml/badge.svg)](https://github.com/ArielMAJ/test.me/actions/workflows/test.me.yml)

## Table of Contents

- [About](#about)
  - [What is _test.me_?](#what-is-testme)
  - [What does _test.me_ do?](#what-does-testme-do)
  - [What are the benefits of using _test.me_?](#what-are-the-benefits-of-using-testme)
  - [Example usage.](#example-usage)
  - [Why C?](#why-c)
- [How to prepare your enviroment](#how-to-prepare-your-enviroment)
  - [Linux](#linux)
  - [Windows](#windows)
  - [MacOS](#macos)
- [How to use](#how-to-use)
- [Compatibility](#compatibility)
- [Translations](#translations)
- [Contributing](#contributing)
- [License](#license)
- [Authors, contributors and acknowledgements](#authors-contributors-and-acknowledgements)

## About

### What is _test.me_?

As a software developer or even someone just starting out in the world of programming, you've probably faced the following challenges:

1. Your code runs locally, but doesn't work in a specific auto-grading tool: the famous "but it works on my machine";

2. Having to manually copy and paste the input for each test case and manually check if the output is correct;

3. You have test cases with (what looks like) infinite input characters;

4. In an online test, having to submit a file several times to test if your solution is passing on all test cases.

These are just some of the problems that can arise when you are developing a solution for a problem. Hitches like these can make things a little more difficult than they need to be and take the focus away from what really matters at the moment: YOUR CODE.

It is with these and other setbacks in mind that _test.me_ was designed. As a way to optimize what is really important: YOUR TIME.

### What does _test.me_ do?

_test.me_ is a tool that automates the process of testing your code. It takes your code and a folder with test cases as input and outputs the results of each test case (PASSED or FAILED).

### What are the benefits of using _test.me_?

- You can test your code without having to submit it to an auto-grading tool every time you make a change;

- You can test your code offline, without having to connect to the internet;

- You can test your code in a matter of seconds, without having to re-compile and then copy and paste your input every time;

- Your program's output will be automatically compared to the expected output;

- You can test your code with multiple test cases in a single command;

### Example usage

<img width="702" alt="image" src="https://user-images.githubusercontent.com/62819445/236364257-c30bb286-b863-45bd-9eb8-eea5cd4b0fc8.png">

### Why C?

_test.me_ could have been developed in, basically, **any** language. But it was developed in C as a way to improve the developer's skills in this language. Quite often, C and C++ are the languages of choice for studying Data Structures and Algorithms (DSA) and competitive programming. It is important to be able to use them efficiently.

## How to prepare your environment

### Linux

#### Install git, gcc, and make

`Ctrl+Alt+T` to open Terminal.

```
sudo apt update
sudo apt upgrade
sudo apt install git
sudo apt install make
sudo apt install gcc
```

#### Download this repo

```
git clone https://github.com/ArielMAJ/test.me.git
cd test.me/
```

### Windows

#### Install chocolatey

- [Chocolatey](https://chocolatey.org/install) is "The Sane Way to Manage Software on Windows".

#### Install git, gcc, and make

Press `Windows+X` then press `A` to open admin Terminal.

```
choco install git
choco install mingw
choco install make
```

#### Download this repo

Press `Windows+X` then press `I` to open Terminal.

Then write:

```
git clone https://github.com/ArielMAJ/test.me.git
cd test.me/
```

### MacOS

TBA

## How to use

### Make shenanigans

```bash
make # Compiles the project.
make help # Shows the Makefile's help info.
make clean # Cleans the project's build files.
make run # Runs the project with an example input.
make run_all # Runs the project with all example inputs.
make format # Runs clang-format on the project's source files (needs clang-format installed).
```

### Compile test.me

```
make
```

### Write your code and create tests for it

Write example inputs and expected outputs as per [the examples in this repo](./example_input/).

PS: Input and output for one single test should have the same naming except for the file extension (".in" for input, ".out" for output).

### Test your code

```
./bin/test.me <Path to your C code> <Path to your example inputs and outputs>
```

e.g:

```
./bin/test.me ./example_input/Q03/solution.c ./example_input/Q03/tests/
```

or, if you have many solutions to different problems in a subfolder with the same naming structure, you can test it all with:

```
./bin/test.me <Solution path in each subfolder> <Tests path in each subfolder> <Folder with subfolders for testing>
```

e.g:

```
./bin/test.me ./solution.c ./tests/ ./example_input/
```

## Compatibility

- Windows: works and is the primary development platform;
- Linux & WSL: works and is sporadically tested;
- MacOS: should work, still needs testers.

Any and everyone is welcome to test this tool locally and leave feedback at [#78](https://github.com/ArielMAJ/test.me/discussions/78). If you have some free time and are interested in it, please do.

## Translations

- [Brazilian Portuguese](./translations/README-ptbr.md)
- [English](./README.md)

## Contributing

Contributions are what make the open source community such an amazing place. With them we are able to be learn, inspire and create much more. Any contributions you make are **greatly appreciated**. For more information, see [CONTRIBUTING](./CONTRIBUTING.md).

## License

Distributed under the Apache 2.0 License. See [LICENSE](./LICENSE) for more information.

## Authors, contributors and acknowledgements

- [@ArielMAJ](https://github.com/ArielMAJ): ariel.maj@hotmail.com
  - Original idea and development;
- [@tauanesales](https://github.com/tauanesales): taysales6@gmail.com
  - General improvements;
  - Feedback and ideas;

[Back to top](#table-of-contents)
