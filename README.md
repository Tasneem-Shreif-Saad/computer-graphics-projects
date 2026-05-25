# Computer Graphics Projects - OpenGL Learning Journey

A curated collection of my OpenGL projects built with GLUT/FreeGLUT, ranging from basic geometric primitives to interactive games. Each project demonstrates core concepts in computer graphics including transformations, animation, event handling, and state management.

## 📁 Project Structure

| File             | Description                                  | Concepts Covered                     |
|------------------|----------------------------------------------|--------------------------------------|
| `point.cpp`      | Draws a single red point                     | Basic vertex rendering               |
| `line.cpp`       | Draws a magenta horizontal line              | GL_LINES, coordinate system          |
| `circle.cpp`     | Draws a red circle using trigonometry        | GL_LINE_LOOP, sin/cos functions      |
| `Ellipse.cpp`    | Draws an ellipse                             | Parametric equations, scaling        |
| `shell_game1.cpp`| Interactive "Cups & Ball" guessing game      | Animation, mouse interaction, scoring, state machine |

## ️ How to Compile and Run

All projects are written in C++ and require **FreeGLUT** (recommended) or legacy GLUT.

### On Linux:
```bash
g++ <filename>.cpp -lfreeglut -lGLU -lGL -lm -o output_name
./output_name
