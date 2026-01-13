# Numerical Differentiation using Finite Difference Methods

This project is a group assignment for the Numerical Methods course.  
It implements **finite difference methods** to approximate the **first and second
derivatives** of mathematical functions and compares the numerical results with
their **exact analytical derivatives**.

The main objective of this project is to analyze the **accuracy and error behavior**
of different numerical differentiation methods.

---

## 📌 Methods Implemented

The following finite difference methods are implemented:

### First Derivative
- Forward Difference  
- Backward Difference  
- Central Difference  

### Second Derivative
- Forward Difference  
- Backward Difference  
- Central Difference  

---

## 🧮 Test Functions

The program supports the following test functions:

| Function | Exact First Derivative | Exact Second Derivative |
|--------|-----------------------|------------------------|
| \( \sin(x) \) | \( \cos(x) \) | \( -\sin(x) \) |
| \( e^x \) | \( e^x \) | \( e^x \) |
| \( x^3 \) | \( 3x^2 \) | \( 6x \) |

These exact derivatives are used to compute numerical errors.

---

## 📐 Mathematical Formulas

### First Derivative

\[
\text{Forward: } f'(x) \approx \frac{f(x+h)-f(x)}{h}
\]

\[
\text{Backward: } f'(x) \approx \frac{f(x)-f(x-h)}{h}
\]

\[
\text{Central: } f'(x) \approx \frac{f(x+h)-f(x-h)}{2h}
\]

### Second Derivative

\[
\text{Forward: } f''(x) \approx \frac{f(x+2h)-2f(x+h)+f(x)}{h^2}
\]

\[
\text{Backward: } f''(x) \approx \frac{f(x)-2f(x-h)+f(x-2h)}{h^2}
\]

\[
\text{Central: } f''(x) \approx \frac{f(x+h)-2f(x)+f(x-h)}{h^2}
\]

---

## 📊 Error Calculation

For each method, the absolute error is computed as:

\[
\text{Error} = |\text{Exact Value} - \text{Numerical Value}|
\]

Errors are calculated separately for:
- Forward difference
- Backward difference
- Central difference

---

## 🖥 How to Run the Program

### Compile
```bash
g++ main.cpp -o main
The program generates CSV files containing numerical error data.

Format:

h, forward_error, backward_error, central_error


These CSV files are used to plot Error vs Step Size (h) graphs in log–log scale.

📈 Graph Analysis

The error vs step size graphs show:

Forward and Backward methods → First-order accuracy 
𝑂
(
ℎ
)
O(h)

Central method → Second-order accuracy 
𝑂
(
ℎ
2
)
O(h
2
)

This demonstrates that the central difference method is more accurate.

👥 Team Collaboration

This project was developed collaboratively using GitHub.
Each team member contributed by working on different parts of the code,
documentation, data analysis, and presentation.

🎯 Conclusion

Finite difference methods provide an effective way to approximate derivatives.
Among the methods tested, the central difference method gives the highest
accuracy for both first and second derivatives.
