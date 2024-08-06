# Roman Numeral Converter

## Description
This program converts integers into Roman numerals and vice versa.

## Requisites
- C++ Compiler (g++)
- CMake
- Git
- Google Test
- Build Essential

## Installation

1. Clone the repository:

```
	git clone https://github.com/seu-usuario/roman-numeral-converter.git
	cd roman-numeral-converter
```

2. Clone Google Test inside project root

```
	git clone https://github.com/google/googletest.git
	cd googletest
	mkdir build
	cd build
	cmake ..
	make
```

## Compilation

To compile the main program and run it:

```
	make run
```

To compile the tests and run it:

```
	make test
```
## Use

To run the program binary

```
	./romanConverter
```

### Usage Example

Integer to Roman Numeral

	Enter an integer: 1994
	Roman Numeral Converted: MCMXCIV


Roman Numeral to Integer

	Enter a Roman numeral: MCMXCIV
	Integer Converted: 1994

### Project Structure

```
roman-numeral-converter/
├── includes/            # Header Files
│   ├── cli.h
│   ├── convert.h
│   ├── utils.h
│   └── validations.h
├── src/                 # Source Code
│   ├── cli.c
│   ├── convert.c
│   ├── main.c
│   ├── utils.c
│   └── validations.c
├── tests/               # Unit Tests
│   └── unit/
│       ├── test_convert.cpp
│       ├── test_utils.cpp
│       └── test_validations.cpp
├── googletest/          # Google Test Git Repository
├── Makefile
└── README.md
```
