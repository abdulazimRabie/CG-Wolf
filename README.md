# Wolf Face Animation Project

![Wolf face](https://github.com/abdulazimRabie/CG-Wolf/assets/114117038/2d21f036-0cc2-463f-a076-ecace1375faa)

## Overview

This project demonstrates a simple animation of a wolf's face using the OpenGL library. The wolf's face is drawn with various facial features, and the animation allows the face to move horizontally.

## Files

- **wolf_animation.cpp:** The main source code file containing the OpenGL code for drawing the wolf's face, handling animation, and keyboard interactions.

## Features

1. **Nose:** Draws the nose of the wolf's face. (Function: `nose()`)
2. **Right Cheek:** Draws the right cheek of the wolf's face. (Function: `rightCheek()`)
3. **Left Cheek:** Draws the left cheek of the wolf's face. (Function: `leftCheek()`)
4. **Chin:** Draws the chin of the wolf's face. (Function: `chin()`)
5. **Forehead:** Draws the forehead of the wolf's face. (Function: `forehead()`)
6. **Eyes:** Draws the eyes of the wolf's face. (Function: `eyes()`)
7. **Gums:** Draws the upper and lower gums of the wolf's face. (Function: `gums()`)
8. **Fangs:** Draws the fangs of the wolf's face. (Function: `fangs()`)
9. **Teeth:** Draws the teeth of the wolf's face. (Function: `teeth()`)

## Animation

- The wolf's face can move horizontally to the right when the animation is enabled.
- Pressing the 'V' key toggles the animation on and off. (Function: `keyboardFunc()`)
- The timer function controls the animation by triggering a redraw at regular intervals. (Function: `timerFunc()`)

## Usage

1. Compile the code using an OpenGL-compatible compiler.
2. Run the executable.
3. The window displays the animated wolf's face.
4. Press the 'V' key to toggle the animation.

## Additional Notes

- Adjust the timer interval and animation speed in the code as needed.
- Feel free to modify the drawing functions to customize the wolf's face.

Enjoy experimenting with the wolf animation project!
