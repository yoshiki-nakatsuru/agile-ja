# Challenge: Version Control Advanced

# Introduction
This challenge is designed to test and enhance your understanding of advanced Git features like branching and merging as well as working back and forth between local and remote repositories. This challenge consists of a series of tasks that will require you to utilize various Git and GitHub features effectively.

In this challenge, you will work on a simple Python program to convert temperatures between Celsius and Fahrenheit. We provide a project template with a function to convert Celsius to Fahrenheit. This function asks the user for input, takes this input and processes it and then it prints a message with the result of the conversion.

# Tasks
## Task 1: Clone and Update the Project
1. Fork this [project](https://github.com/ms1-learner/temperature_converter) on Github.
2. Clone the project locally to your machine.
3. Create a branch `fahrenheit_to_celsius` and switch to it.
4. Write a function `convertFahrenheitToCelsius` that converts temperature from Fahrenheit to Celsius. The formula you can use is `C = 5/9 * (F - 32)`.
5. Stage and the commit the change.
6. Push the branch `fahrenheit_to_celsius` to the remote repository. 
7. Create a pull request and specify what changes you’ve made in the pull request description. Make sure to include your name.

## Task 2: Execute the Program
1. Merge the branch `fahrenheit_to_celsius` to the `main` branch locally.
2. Create a branch `execute_program` and switch to it.
3. Write a function `main` that does the following:
- Prints a message “Enter c if you want to convert from Fahrenheit to Celsius”.
- Prints another message “Enter f if you want to convert from Celsius to Fahrenheit”
- Checks the user input and acts according to the following:
    - If user input is `"c"` , the function `convertFahrenheitToCelsius` should be called.
    - Else if user input is `"f"`, the function `convertCelsiusToFahrenheit` should be called.
    - Else, if the user input is anything else, print a message “Incorrect input. Please try again later”.
1. Stage and commit the change.
2. Switch back to the `main` branch.
3. Add the following code:

```python
def main():
  convertFahrenheitToCelsius()
  convertCelsiusToFahrenheit()
main()
```

1. Stage and commit the change.
2. Merge `execute_program` branch into `main` branch.
3. A merge conflict will arise, solve the conflict and keep the version of `main` that you created.
4. Once the merge conflict is solved, push the `execute_program` branch to the remote repository.
5. Create a pull request and specify what changes you’ve made in the pull request description. Make sure to include your name.

## (Optional) Task 3 : Enhance the Program
1. Create a branch `enhancements` and switch to it.
2. Think of any enhancement you think this program can benefit from. Here are some ideas:
    - Add functions to convert between Kelvin and Fahrenheit, and Kelvin and Celsius.
    - On incorrect user input, make the program re-run automatically until a valid input is created.
    - Use the `time` Python module to add some pauses between printed messages to simulate a real program that processes data in the background before sending a response.
3. Push the `enhancements` branch to the remote repository. 
4. Create a pull request and specify what changes you’ve made in the pull request description. Make sure to include your name.

# What you need to submit
1. The link to your forked Github repository.
2. The local project folder, in `.zip` format.