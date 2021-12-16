#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "AminoAcidCompositionPlugin.h"

void AminoAcidCompositionPlugin::input(std::string file) {
 inputfile = file;
}

void AminoAcidCompositionPlugin::run() {
   
}

void AminoAcidCompositionPlugin::output(std::string file) {
 // spades.py -o 02_AminoAcidComposition -1 $1 -2 $2 --careful
 // assembly-stats -t ./All_assemblies/*.fasta > ./All_assemblies/00_Metrics_all_assemblies.txt
	std::string command = "amino-acid-composition < "+inputfile+" >& "+file;
 std::cout << command << std::endl;

 system(command.c_str());

}

PluginProxy<AminoAcidCompositionPlugin> AminoAcidCompositionPluginProxy = PluginProxy<AminoAcidCompositionPlugin>("AminoAcidComposition", PluginManager::getInstance());
