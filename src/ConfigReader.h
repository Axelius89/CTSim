/*
 * ConfigReader.h
 *
 *  Created on: 04.07.2013
 *      Author: Alexander
 */

#ifndef CONFIGREADER_H_
#define CONFIGREADER_H_

typedef struct {
	char pathToSlice[200];
	char pathToOutputReconstruction[200];
	char pathToOutputSinogram[200];
	int minEnergy;
	int maxEnergy;
	int energyLevels;
	int numberOfThreads;
	int numberOfProjectionAngles;
} config;

config cfg;

void readSettingsFromConfigFile(char *conFile);
int calculateStringLength(char *string);
int prefix(char *pre, char *str);
char* cfgString(void);
void setCFGToDefault(void);


#endif /* CONFIGREADER_H_ */
