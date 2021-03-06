#pragma once
/*
        drawbot.h
        Customization machine of Grbl_ESP32
*/

#define MACHINE_NAME "DRAWBOT"

#define CUSTOM_CODE_FILENAME    "../Custom/CoreXY.cpp"

#define MIDTBOT         // applies the midTbot geometry correction to the CoreXY kinematics 

#define X_STEP_PIN      GPIO_NUM_12
#define Y_STEP_PIN      GPIO_NUM_14

#define X_DIRECTION_PIN GPIO_NUM_26
#define Y_DIRECTION_PIN GPIO_NUM_25

#define STEPPERS_DISABLE_PIN GPIO_NUM_13

#define X_LIMIT_PIN     GPIO_NUM_15
#define Y_LIMIT_PIN     GPIO_NUM_4


//#define Z_SERVO_PIN               GPIO_NUM_27
#define SPINDLE_OUTPUT_PIN          GPIO_NUM_27
#define SPINDLE_TYPE                SpindleType::PWM
#define DEFAULT_SPINDLE_RPM_MIN     0.0  // $31 rpm
#define DEFAULT_LASER_MODE          1    // $32 false
#define DEFAULT_SPINDLE_RPM_MAX     1000.0  // $30 rpm
#define DEFAULT_SPINDLE_FREQ        5000.0  // $33 Hz (extended set)
#define DEFAULT_SPINDLE_OFF_VALUE   2.5     // $34 1638, Percent of full period 65536 (extended set)
#define DEFAULT_SPINDLE_MIN_VALUE   2.5     // $35 1638, Percent of full period 65536 (extended set)
#define DEFAULT_SPINDLE_MAX_VALUE   5.8   // $36 3808, Percent of full period 65536 (extended set)
//#define DEFAULT_SPINDLE_MAX_VALUE   12.0   // $36 7864, Percent of full period 65536 (extended set)

// defaults
#define DEFAULT_HOMING_CYCLE_0      bit(Z_AXIS)
#define DEFAULT_HOMING_CYCLE_1      bit(Y_AXIS)
#define DEFAULT_HOMING_CYCLE_2      bit(X_AXIS)

#define DEFAULT_HOMING_DIR_MASK     bit (Z_AXIS) // these home negative

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

#define DEFAULT_SOFT_LIMIT_ENABLE 1 // false
#define DEFAULT_HARD_LIMIT_ENABLE 1  // false

#define DEFAULT_HOMING_ENABLE           1
#define DEFAULT_HOMING_DIR_MASK         7 // move positive dir Z, negative X,Y
#define DEFAULT_HOMING_FEED_RATE        500.0 // mm/min
#define DEFAULT_HOMING_SEEK_RATE        1000.0 // mm/min
#define DEFAULT_HOMING_DEBOUNCE_DELAY   200 // msec (0-65k)
#define DEFAULT_HOMING_PULLOFF          1.0 // mm

#define DEFAULT_X_STEPS_PER_MM 80.0
#define DEFAULT_Y_STEPS_PER_MM 80.0
#define DEFAULT_Z_STEPS_PER_MM 4.0 // This is percent in servo mode

#define DEFAULT_X_MAX_RATE 8000.0 // mm/min
#define DEFAULT_Y_MAX_RATE 8000.0 // mm/min
#define DEFAULT_Z_MAX_RATE 5000.0 // mm/min

#define DEFAULT_X_ACCELERATION 200.0 // mm/sec^2. 200 mm/sec^2 = 720000 mm/min^2
#define DEFAULT_Y_ACCELERATION 200.0 // mm/sec^2
#define DEFAULT_Z_ACCELERATION 100.0 // mm/sec^2

#define DEFAULT_X_MAX_TRAVEL 295.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Y_MAX_TRAVEL 210.0 // mm NOTE: Must be a positive value.
#define DEFAULT_Z_MAX_TRAVEL 5.0 // This is percent in servo mode

//#define DEFAULT_X_HOMING_MPOS DEFAULT_Z_MAX_TRAVEL // stays up after homing
#define DEFAULT_X_HOMING_MPOS   -1.0 
#define DEFAULT_Y_HOMING_MPOS   -1.0
#define DEFAULT_Z_HOMING_MPOS   0.0

