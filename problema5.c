#include <stdio.h>
#include <stdint.h>

typedef enum {
    NO_ALARM = 1,
    YELLOW_ALARM,
    RED_ALARM
} AlarmStatus;

// Máscaras para identificar los grupos de sensores
#define FRONT_SENSORS_MASK  ( (1 << 0) | (1 << 1) ) // 0b00000011
#define REAR_SENSORS_MASK   ( (1 << 2) | (1 << 3) ) // 0b00001100

/**
 * @brief Determina el estado de la alarma de estacionamiento basado en el registro de sensores.
 * @param sensor_register El valor de 8 bits del registro de estado de los sensores.
 * @return El estado de la alarma (NO_ALARM, YELLOW_ALARM, RED_ALARM).
 */
AlarmStatus get_parking_alarm_status(uint8_t sensor_register)
{
  // Modificar esta funcion
  return 0;
}


// ========================================= No tocar ================================================= //
int main()
{
    uint8_t position = 0;
    scanf("%hhu", &position);
    AlarmStatus status = get_parking_alarm_status(position);
    
    printf("%d", status);
}
// ========================================= No tocar ================================================= //