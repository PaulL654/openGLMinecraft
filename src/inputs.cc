#include "inputs.hh"

// handle keyboard inputs
void processInput(GLFWwindow *window)
{
    // close window if escape is pressed
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}
