#pragma once

#include <sys/stat.h>
#include <string>
#include <fstream>
#include <map>
#include <memory>
#include "identification.cpp"
#include "enums.h"
#include "square.h"
#include "constants.h"
#include "utils.h"
#include "arduino.h"

class ColorCalibrator
{
    public:
        ColorCalibrator(std::map<std::string, Square> squares, std::shared_ptr<Microcontroller> microcontroller);
        void calibrate();
        std::map<std::string, double> configValues;

    private:
        bool configExists();
        void readConfig();
        void writeConfig();
        void initializeConfig();
        void initializeConfigFile();
        void calibrateFace(Face currentFace);
        void sumCalibrationHues(int squareIndex, Face currentFace, std::map<std::string, double> faceHues);
        std::shared_ptr<Microcontroller> microcontroller;
        std::map<std::string, Square> squares;
};
