# Challenge: Testing and Validation

## Description
Use your knowledge of testing to complete the requirements below.
- Only "Mt. Fuji" requirements need to be completed for this Challenge
- "Mt. Kilimanjaro" and "Mt. Everest" are optional for completion. They are intended to challenge you and help you grow your skills. In order to complete them, these optional difficulty levels may require you to do independent research for topics not covered in this course.

## Requirements
Write a function `my_assert` in Python, in the script below, that accepts two arguments: 
1. an expression `expr` that will evaluate to a bool value.
2. an optional message `msg` to be returned if `expr` evaluates to `false`.

Your function should also include the following:
- return an error message "No expression provided" if there is no `expr` argument.
- a generic error message to be used if `msg` is not provided.

Then, using `my_assert`, complete the tests for the functions provided. Please start writing your code after the "#----Your code here----" comment.

```python
#----These functions do not need to be changed----
names = ["Nick", "Lewis", "Nikos"]

def contains(name, list_of_names):
    if name not in list_of_names:
        return False
    else:
        return True

def get_name(name, list_of_names):
    if name in list_of_names:
        return name
    else:
        return "[undefined]"

def add_name(name, list_of_names):
    list_of_names.append(name)
    return name

def add_two(num):
    return num + 2

def divide_by_two(num):
    return num / 2

def greeting(name, num):
    message = f"Hello, {name}. It is {num} degrees warmer today than yesterday"
    print(message)
    return message

#----Your code here----
#----Difficulty: Mt. Fuji----

#define `my_assert` here, and use it for the subsequent tests

#make a test for `contains` here

#make a test for `getName` here

#make a test for `addName` here

#make a test for `addTwo` here

#make a test for `divideByTwo` here

#make a test for `greeting` here


#----Difficulty: Mt Kilimanjaro----

#make a test for `my_assert` to check if it correctly returns the given optional `msg`

#make a test for your own `my_assert` function, using `my_assert` on itself to check if it correctly returns an error if no `expr` provided.



#----Difficulty: Mt. Everest----
#make a test for the entire following expression using `my_assert`. If the expression fails, make sure to give a descriptive message for `msg` that describes how the expression fails.
greeting(get_name("Frosty the Snowman"), divide_by_two(add_two(2)))


```



## Submission
Submit your work here: [placeholder]