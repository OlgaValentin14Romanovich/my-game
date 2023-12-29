#define isDown(b) input->buttons[b].isDown
#define pressed(b) (input->buttons[b].isDown && input->buttons[b].changed)
#define released(b) (!input->buttons[b].isDown && input->buttons[b].changed)

float playerPositionX = 0.f;
float playerPositionY = 0.f;

internalVariable void simulateGame(Input* input) {
	clearScreen(0xff5500);
	
	
	
	if (pressed(BUTTON_UP)) playerPositionY += 1.f;
	if (pressed(BUTTON_DOWN)) playerPositionY -= 1.f;
	if (pressed(BUTTON_LEFT)) playerPositionX -= 1.f;
	if (pressed(BUTTON_RIGHT)) playerPositionX += 1.f;
	
	drawRectangle(playerPositionX, playerPositionY, 1, 1, 0x000000);
	drawRectangle(15+playerPositionX,15+ playerPositionY, 8, 1, 0x00FF00);
	drawRectangle(30+playerPositionX, 30+ playerPositionY, 5, 5, 0x008080);
	drawRectangle(-20+ playerPositionX, 20+ playerPositionY, 8, 3, 0x000080);
}