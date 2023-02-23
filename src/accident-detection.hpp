/**
 * \file accident-detection.hpp
 * \brief Interface to get accident detection events.
 * \details This files
 */

/**
 * \addtogroup vehicle-mon
 * @{
 */

/**
 * \defgroup accident Accident Detection
 * \brief Accident detection events module
 */

/**
 * @}
 */

/**
 * \addtogroup accident
 * @{
 */

/**
 * \brief Types of incidents
 */
enum AccidentEventType
{
  ACCIDENT_TYPE_CRASH,              /**<Crash accident*/
  ACCIENT_TYPE_HARSH_BRAKE,         /**<Vehicle stopped harshly*/
  ACCIDENT_TYPE_HARSH_ACCELERATION, /**<Vehicle accelerated harshly*/
};

/**
 * \brief Triggers crash events
 * \details This class collects crash triggers from different sources
 * to identify valid crash events
 */
class AccidentEvent
{
public:
  /**
   * \brief Register event.
   * @param type Accident type
   * @param eventParams pointer to custom event parameters
   * @return Whether event is valid or not
   * @see #AccidentEventRegistry
   */
  bool registerEvent(AccidentEventType type, void *eventParams);

  int count; /**<Count of events*/

private:
  void resetEvent();
};

/**
 * \brief Registry of events
 * \details Store history of accident events \image html image2.jpg
 */
class AccidentEventRegistry
{
public:
};

/**
 * @}
 */
