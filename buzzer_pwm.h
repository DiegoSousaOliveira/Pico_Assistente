#ifndef BUZZER_PWM_H
#define BUZZER_PWM_H

// Configuração do pino do buzzer
#define BUZZER_PIN 21

// Inicializa o PWM no pino do buzzer
void pwm_init_buzzer(uint pin);
 
 // Toca uma nota com a frequência e duração especificadas
void play_tone(uint pin, uint frequency, uint duration_ms);
 
 // Função principal para tocar a música
void play_star(uint pin);
 
int play_music();

#endif