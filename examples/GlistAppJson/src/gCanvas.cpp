/*
* gCanvas.cpp
*
*  Created on: May 6, 2020
*      Author: noyan
*/


#include "gCanvas.h"
#include "gFile.h"


gCanvas::gCanvas(gApp* root) : gBaseCanvas(root) {
	this->root = root;
}

gCanvas::~gCanvas() {
}

void gCanvas::setup() {
	//gLogi("gCanvas") << "setup";
	logo.loadImage("glistengine_logo.png");
	json.loadJsonFile("example_2.json");
	std::string question = json.getValue("quiz.maths.q1.question");
	gLogi("gCanvas") << "Question from JSON: " << question;
    std::string options = json.getValue("quiz.maths.q1.options");
	gLogi("gCanvas") << "Options from JSON: " << options;
    json.setValue("quiz.maths.q1.options", "Option A, Option B, Option C, Option D");
	json.setValue("quiz.maths.q2.answer", "5");
	gLogi("gCanvas") << "New answer for q2 set to '5'";
    gLogi("gCanvas") << "Updated options for q1 'Option A, Option B, Option C, Option D'";
	json.saveJsonFile("test.json");
	gLogi("gCanvas") << "Saving JSON data to 'test.json'";
}

void gCanvas::update() {
	//gLogi("gCanvas") << "update";
}

void gCanvas::draw() {
	//gLogi("gCanvas") << "draw";

	logo.draw((getWidth() - logo.getWidth()) / 2, (getHeight() - logo.getHeight()) / 2);
}

void gCanvas::keyPressed(int key) {
//	gLogi("gCanvas") << "keyPressed:" << key;
}

void gCanvas::keyReleased(int key) {
//	gLogi("gCanvas") << "keyReleased:" << key;
}

void gCanvas::charPressed(unsigned int codepoint) {
//	gLogi("gCanvas") << "charPressed:" << gCodepointToStr(codepoint);
}

void gCanvas::mouseMoved(int x, int y) {
//	gLogi("gCanvas") << "mouseMoved" << ", x:" << x << ", y:" << y;
}

void gCanvas::mouseDragged(int x, int y, int button) {
//	gLogi("gCanvas") << "mouseDragged" << ", x:" << x << ", y:" << y << ", b:" << button;
}

void gCanvas::mousePressed(int x, int y, int button) {
}

void gCanvas::mouseReleased(int x, int y, int button) {
//	gLogi("gCanvas") << "mouseReleased" << ", button:" << button;
}

void gCanvas::mouseScrolled(int x, int y) {
//	gLogi("gCanvas") << "mouseScrolled" << ", x:" << x << ", y:" << y;
}

void gCanvas::mouseEntered() {

}

void gCanvas::mouseExited() {

}

void gCanvas::windowResized(int w, int h) {

}

void gCanvas::showNotify() {

}

void gCanvas::hideNotify() {

}

