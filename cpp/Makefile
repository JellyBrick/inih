all:
	g++ -mwindows -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -o initest.exe ../ini.c INIReader.cpp INIReaderTest.cpp -O4 -march=native -fpermissive -funroll-loops -mfpmath=sse -msse2 -msse3 -mssse3 -ffast-math  -Wno-format-y2k  -fno-exceptions -fno-strict-aliasing -s -fopenmp -std=c++0x -mconsole -m64 -static-libgcc -static-libstdc++ -static
	g++ -mwindows -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -o initest-printf.exe ../ini.c INIReader.cpp INIReaderTest-printf.cpp -O4 -march=native -fpermissive -funroll-loops -mfpmath=sse -msse2 -msse3 -mssse3 -ffast-math  -Wno-format-y2k  -fno-exceptions -fno-strict-aliasing -s -fopenmp -std=c++0x -mconsole -m64 -static-libgcc -static-libstdc++ -static
linux:
	g++ -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -o initest.exe ../ini.c INIReader.cpp INIReaderTest.cpp -O4 -march=native -fpermissive -funroll-loops -mfpmath=sse -msse2 -msse3 -mssse3 -ffast-math  -Wno-format-y2k  -fno-exceptions -fno-strict-aliasing -s -fopenmp -std=c++0x -m64 -static-libgcc -static-libstdc++ -static
local:
	g++ -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -o initest.exe ../ini.c INIReader.cpp INIReaderTest.cpp -O4 -march=native -fpermissive -funroll-loops -mfpmath=sse -msse2 -msse3 -mssse3 -ffast-math  -Wno-format-y2k  -fno-exceptions -fno-strict-aliasing -s -fopenmp -std=c++0x -m64
	g++ -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -o initest-printf.exe ../ini.c INIReader.cpp INIReaderTest-printf.cpp -O4 -march=native -fpermissive -funroll-loops -mfpmath=sse -msse2 -msse3 -mssse3 -ffast-math  -Wno-format-y2k  -fno-exceptions -fno-strict-aliasing -s -fopenmp -std=c++0x -m64

	