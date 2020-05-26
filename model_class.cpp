
#include "model_class.hpp"

// =====

Cairomm_model::model_window::model_window() {}

// =====

Cairomm_model::model_launcher::model_launcher(int argc = 0, char** argv = NULL) {
    app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
}

// =====


Cairomm_model::model_area::model_area() {}

bool Cairomm_model::model_area::on_draw(const Cairo_C & cr){
    draw_func(cr);
    return true;
}

// =====

Cairomm_model::model::model(){
   window.set_title("model");

   window.add(area);
}

void Cairomm_model::model::run(void(*tar_draw_func)(const Cairo_C &)){
    area.draw_func = tar_draw_func;
    area.show();
    launcher.app->run(window);
}
