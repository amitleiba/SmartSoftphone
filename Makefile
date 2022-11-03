 -include	/home/amit/Documents/Libaries/pjproject/build.mak
 
 
all:
	g++ src/Main.cpp `pkg-config --cflags --libs libpjproject`	$(APP_LDXXLIBS) 	-o app

clean:
	rm -rf app