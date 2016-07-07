#ifndef CP5_ex7_32_h
#define CP5_ex7_32_h

#include <vector>
#include <string>

class Screen {
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {}
	
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	
	friend class Window_mgr;
};

class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
private:
	std::vector<Screen> screens {Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.height * s.width, ' ');
}

#endif