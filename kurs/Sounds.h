#pragma once
#include "MyForm.h"

ref class Sounds {
	System::Media::SoundPlayer^ nota_c3 = gcnew System::Media::SoundPlayer("mi.wav");
	System::Media::SoundPlayer^ nota_d3 = gcnew System::Media::SoundPlayer("fa.wav");
	System::Media::SoundPlayer^ nota_e3 = gcnew System::Media::SoundPlayer("sol.wav");
	System::Media::SoundPlayer^ nota_f3 = gcnew System::Media::SoundPlayer("la.wav");
	System::Media::SoundPlayer^ nota_g3 = gcnew System::Media::SoundPlayer("si.wav");
	System::Media::SoundPlayer^ nota_a3 = gcnew System::Media::SoundPlayer("do.wav");
	System::Media::SoundPlayer^ nota_b3 = gcnew System::Media::SoundPlayer("re.wav");
public:
	void get_c3() { return nota_c3->Play(); }
	void get_d3() { return nota_d3->Play(); }
	void get_e3() { return nota_e3->Play(); }
	void get_f3() { return nota_f3->Play(); }
	void get_g3() { return nota_g3->Play(); }
	void get_a3() { return nota_a3->Play(); }
	void get_b3() { return nota_b3->Play(); }
};


