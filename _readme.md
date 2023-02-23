# Welcome to Doxygen Demo

This is a sample project to show how to use [Doxygen](https://www.doxygen.nl/) for code documentation.

Doxygen is a tool to generate documentation viewable as webpage by extracting comments from the your code.

## Generating documentation

Doxygen is an app that can be [installed](https://www.doxygen.nl/manual/install.html) on your device and it works by adding a configuration file (`Doxyfile`) in your project and running it using `doxygen -g` command to generate the documentation, or using [Doxywizard UI](https://www.doxygen.nl/manual/doxywizard_usage.html) that comes with the software.

For this project, documentation is generated already, to view the webpage go to `/doc/html/index.html`. it would be a good idea to compare the script/code in the repository to see how script is translated into html documentation.

Feel free to play around with the script and `.md` files to see how it is reflected on documentation. If you make any changes, you need to regenerate the docs by using Doxywizard:
 -# Open Doxywizard
 -# Go to File > Open
 -# Select `Doxygenfile` inside this repository and open it.
 -# Go to Run tab and click "Run doxygen"

 Normally, you wouldn't have to manipulate Doxygen configurations or learn about them. But as a developer, you would need to learn the right syntax that would make your code comments syntax understandable for Doxygen and enables it to generate documentation.

## Documenting the code

Please explore the files in `src/` and checkout the `Modules` section on the left pane of this page.

Through exploration, you should learn few key syntaxes:
 -# Creating block comments `/** .... */`
 -# Using block comments to add brief description to functions, classes, etc. `\brief`
 -# Using block comments to add detailed description to functions, classes, etc. `\details` (optional)
 -# Using block comments to add description to files `\file`
 -# Using inline comments to describe class members and variables, enum values etc. `/**< ... */`
 -# Adding function parameter description `@param`
 -# Adding function return description `@return`
 -# Adding "See also" links `@see`
 -# Adding reference (links) to files `@ref`
 -# Adding reference (links) to other classes/functions `#`
  -# For classes and namespaces you don't need to add `#`, just type the class/namepsace (case-sensitive) and it will be linked automatically

Other additional features you might notice:
 -# Adding bullet-point and numbered lists `-` `-#`
 -# Adding images `\image html`

IMPORTANT NOTES:
 -# Doxygen has many more features that are not mentioned here. Please note that code comments are not only used to generate documentation, but also to be read by IDE's Intellisense [^1] to make a better developing experience. For example, in VS Code:
  -# `\brief` description appears when hovering over class/function name in VS Code, but not `\details`.
  -# Doxygen allows placing block comments anywhere not necessarily before the documented entity, but VS Code Intellisense doesn't understand this syntax.
 -# Only header files (`.h`, `.hpp`) will be scanned. You do NOT have to document internal code functionality. Even in header files, you don't have to document private functions that wil be used internally. In general, you need to document functions and interfaces that would be used by other developers.

[^1]: Make sure you have the right [VS Code extensions](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) to have the functionality of Intellisense.

### Modules and groups

Code entities can be grouped into modules (as you can see in the `Modules` section on the left pane). These modules are created by adding special-syntax block comments in code files. An example of this can be found in @ref power-mgmt.hpp and @ref sleep.hpp.

To do that, you need to:

Define the group `\defgoup` (See )

    /**
    * \defgroup group-id Module Name
    * \brief Brief description...
    * \details Detailed description...
    * @see @ref extra-documentation.md
    */

Encapsulate the entities that you want in the group with block comments

    /**
    * \addtogroup group-id
    * @{
    */

    /**
    * \brief Function description.
    */
    void myFunction();

    /**
    * @}
    */

Now `myFunction` will appear under that module.

Module's entities don't have to be in the same file. You can use `\addtogroup` anywhere.

You can nest modules under other modules, just place the `\defgroup` definition of the submodule under `\addtogroup` brackets of the parent module.

## Markdown support

It is good to keep the in-code comments to describe the classes, interfaces and functions.
High-level description of the module can be placed in markdown (`.md`) files.

To learn about markdown syntax checkout [this link](https://www.freecodecamp.org/news/markdown-cheatsheet/) for some explanation, or try [Stackedit](https://stackedit.io/) which is a web tool to write markdown files.

In `.md` files you could add explanation of the module and provide examples.

`.md` files will show-up on the left pane as sections of their own, not under `Modules` sections.

Just as in code comments, you can add links to classes and code entities by typing `#ClassName`, and you can add links to other documents `@ref filename.hpp`.

![Example image](Owl.jpg)