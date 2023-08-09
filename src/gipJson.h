/*
 * gipJson.h
 *
 *  Created on: Mar 11, 2023
 *      Author: Noyan Culum
*/

#ifndef SRC_GIPJSON_H_
#define SRC_GIPJSON_H_

#include "gBaseComponent.h"
#include "json.hpp"
#include "gFile.h"

class gipJson : public gBaseComponent{
public:
	gipJson();
	virtual ~gipJson();

	void loadJsonFile(const std::string& filename);
	std::string getValue(const std::string& key);
    void setValue(const std::string& key, const std::string& newValue);
    void saveJsonFile(const std::string& filename);

private:
	gFile file;
	std::string path;
	nlohmann::json js;
};

#endif /* SRC_GIPJSON_H_ */
