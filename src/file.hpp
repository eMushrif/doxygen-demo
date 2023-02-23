/** \file file.hpp \brief Brief description of the file. It starts with.
 *         Brief description continued.
 *
 *  Detailed description starts here, after an empty line.
 */

/**
 * \defgroup my-group Some Group
 * \brief Some description
 * \details more details
 */

/**
 * \addtogroup my-group
 * @{
 */

/**
 * \defgroup my-group2 Some sub Group
 * Some description
 * short?
 *
 * Detailed descriptino
 */

/**
 * \brief This is a block comment used to describe functions, classes, structs... etc. Put brief description here.
 * sss
 * \details After an empty line, add more detailed description.
 * Place these block comments before the thing you want to describe.
 * This block comment describes the function toUpperCase below.
 * For functions, you can add descriptions for function arguments and return.
 * Use param and return for that as in the example below.
 * You can also add see to refer to other related classes and functions
 *
 * @param text input text to be converted
 * @return pointer to text after conversion
 * @see myClass myFunc
 */
char *toUpperCase(const char *text, bool newBuffer /**< You can also add parameter description like this. A block comment with < symbol. */)
{
  // for comments that describe internal functionality of the code just use normal comments
}

/**
 * \brief Scarlton brief
 */
void myFunc();
/**
 * Use block comments to describe classes and enums.
 *     If 4 spaces come in from of the line,
 *     then the line is considered a continuation of the previous one.
 *
 * \image html Owl.jpg
 * @see @ref readme.md
 */
enum CustomerType
{
  GOOD_CUSTOMER, /**< Add description for enum value */
  BAD_CUSTOMER   /**< Add description for enum value */
};

/**
 * @}
 */

/**
 * \class myClass
 * \brief This is a description of the class the can be placed anywhere, not necessarily before the class declaration.
 *
 * You can add more detailed description here.
 * You can use any of the following markers to identify the type of entity, just as we used \class marker above.
 * \class \struct \union \enum \fn \var \def (for macro definition) \typedef \file \namespace
 *
 * Beware that if you want to add a comment for a global function/class,
 *     you MUST add \file tag. For example: \file sketch.h
 */

/**
 * \addtogroup my-group2
 * @{
 */

class myClass;

/**
 * @}
 */