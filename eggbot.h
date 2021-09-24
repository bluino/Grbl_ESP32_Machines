#pragma once
/*
        eggbot.h
        Customization machine of Grbl_ESP32
*/

#define MACHINE_NAME "EGGBOT"

// Pick a board version
//#define PEN_LASER_V1
#define EGGBOT

#define X_STEP_PIN      GPIO_NUM_12
#define Y_STEP_PIN      GPIO_NUM_14

#define X_DIRECTION_PIN GPIO_NUM_26
#define Y_DIRECTION_PIN GPIO_NUM_25

#define STEPPERS_DISABLE_PIN GPIO_NUM_13

#define X_LIMIT_PIN     GPIO_NUM_15
#define Y_LIMIT_PIN     GPIO_NUM_4

#define Z_SERVO_PIN     GPIO_NUM_27

#define DEFAULT_STEP_PULSE_MICROSECONDS 3
#define DEFAULT_STEPPER_IDLE_LOCK_TIME  255 // stay on

#define DEFAULT_STEPPING_INVERT_MASK    0 // uint8_t
#define DEFAULT_DIRECTION_INVERT_MASK   0 // uint8_t
#define DEFAULT_INVERT_ST_ENABLE        0 // boolean
#define DEFAULT_INVERT_LIMIT_PINS       0 // boolean
#define DEFAULT_INVERT_PROBE_PIN        0 // boolean

#define DEFAULT_STATUS_REPORT_MASK 1

#define DEFAULT_JUNCTION_DEVIATION  0.01 // mm
#define DEFAULT_ARC_TOLERANCE       0.002 // mm
#define DEFAULT_REPORT_INCHES       0 // false

#define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
#define DEFAULT_HARD_LIMIT_ENABLE 0  // false

#define DEFAULT_HOMING_ENABLE           0
#define DEFAULT_HOMING_DIR_MASK         0 // move positive dir Z, negative X,Y
#define DEFAULT_HOMING_FEED_RATE        500.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE        1000.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY   200 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF          1.0 // mm

#define DEFAULT_X_STEPS_PER_MM 20.0
#define DEFAULT_Y_STEPS_PER_MM 20.0
#define DEFAULT_Z_STEPS_PER_MM 4.0 // This is percent in servo mode

#define DEFAULT_X_MAX_RATE 8000.0 // mm/min
#define DEFAULT_Y_MAX_RATE 8000.0 // mm/min
#define DEFAULT_Z_MAX_RATE 5000.0 // mm/min

#define DEFAULT_X_ACCELERATION 200.0 // mm/sec^2. 200 mm/sec^2 = 720000 mm/min^2
#define DEFAULT_Y_ACCELERATION 200.0 // mm/sec^2
#define DEFAULT_Z_ACCELERATION 100.0 // mm/sec^2

#define DEFAULT_X_MAX_TRAVEL 160.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Y_MAX_TRAVEL 40.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Z_MAX_TRAVEL 5.0 // This is percent in servo mode