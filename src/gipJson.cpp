/*
 * gipJson.cpp
 *
 *  Created on: Mar 11, 2023
 *      Author: Noyan Culum
 */

#include "gipJson.h"


gipJson::gipJson() {
}

gipJson::~gipJson() {
}

void gipJson::loadJsonFile(const std::string& filename) {
	gFile file;
	file.loadFile(filename, gFile::FILEMODE_READONLY, false);
	std::string filecontent = file.getText();

	js = nlohmann::json::parse(filecontent);
	file.close();
}

std::string gipJson::getValue(const std::string& key) {
	return js[key];
}

void gipJson::setValue(const std::string& key, const std::string& newValue) {
	js[key] = newValue;
}

void gipJson::saveJsonFile(const std::string& filename) {
      gFile file;
      file.loadFile(filename, gFile::FILEMODE_WRITEONLY, false);
	  file.write(js.dump());
	  file.close();
}
