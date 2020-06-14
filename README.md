# grade_calculator

## Use
A GUI designed in Qt/c++ to calculate a student's grade based on homework, midterm, and final exam scores. The user can choose between two different classes (PIC 10B and PIC 10C) to evaluate final grades in. The user can also choose from two different grading schemes (one with both midterm grades incorporated and one with only the higher of the two) to identify the grade that most benefits the student. Sliders are provided to show how small changes in homework or test grades may affect final class grade.

## Process
I initially had some trouble learning how to connect the values of the sliders and spinboxes, but after discovering the simple-to-use "Signals Slots Editor" in Qt Designer, the process became much easier. One thing that I had trouble with towards the end of the project was finding a simple way to constantly update the overall score once any spinbox or slider was moved. It would have nice to have some signal in the main window saying that if any object in the window was changed, calculate and display the updated score. Instead, I had to use the slots of each object in the window to trigger the grade update which seemed redundant and unnecessary. I'm glad it all works though!
