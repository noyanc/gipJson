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
//	gLogi("gCanvas") << "json:" << js.dump(4);
//	std::cout << js["fruit"] << std::endl;
//	std::cout << js["size"] << std::endl;
//	std::cout << js["color"] << std::endl;
}

std::string gipJson::getValue(const std::string& key) {
	return js[key];
}

void gipJson::setValue(const std::string& key, const std::string& newValue) {
	js[key] = newValue;
}

void gipJson::saveJsonFile(const std::string& filename) {
//    std::ofstream outfile(filename);
//    outfile << std::setw(4) << js << std::endl;
      gFile file;
      file.loadFile(filename, gFile::FILEMODE_WRITEONLY, false);
	  file.write(js.dump());



}
