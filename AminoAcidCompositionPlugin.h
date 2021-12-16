#ifndef AMINOACIDCOMPOSITIONPLUGIN_H
#define AMINOACIDCOMPOSITIONPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class AminoAcidCompositionPlugin : public Plugin
{
public: 
 std::string toString() {return "AminoAcidComposition";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
