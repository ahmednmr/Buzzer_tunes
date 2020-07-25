#include <avr/io.h>
#include <util/delay.h>

#define Buzzer_PORT PORTD
#define Buzzer_DDR DDRD
#define Buzzer_PIN 7


void PLAYNOTE_nmr(int duration,int frequency);

int main(void)
{

	Buzzer_DDR |= (1 << Buzzer_PIN);


	while(1)
	{

		PLAYNOTE_nmr(400,880);
		PLAYNOTE_nmr(400,932);
		PLAYNOTE_nmr(400,988);
		PLAYNOTE_nmr(400,1047);
		PLAYNOTE_nmr(400,1109);
		PLAYNOTE_nmr(400,1175);
		PLAYNOTE_nmr(400,1244);
		PLAYNOTE_nmr(400,1319);
		PLAYNOTE_nmr(400,1397);
		PLAYNOTE_nmr(400,1480);
		PLAYNOTE_nmr(400,1568);
		PLAYNOTE_nmr(400,1660);




		_delay_ms(2000);






	}


	return 0;
}





void PLAYNOTE_nmr(int duration,int frequency)
{
	unsigned int i=0,cycles=0;
	 double period=0,half_period=0;

	 period=1/(double)frequency;
	 period*=1000;
	 half_period=period/2;

	 cycles=(double)duration/period;

	for (i=0;i<cycles;i++)
		{
			_delay_ms(half_period);

			Buzzer_PORT |= (1 << Buzzer_PIN);

			_delay_ms(half_period);

			Buzzer_PORT &= ~(1 << Buzzer_PIN);

		}




}


