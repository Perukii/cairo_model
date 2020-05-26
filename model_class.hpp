
typedef Cairo::RefPtr<Cairo::Context> Cairo_C;


namespace Cairomm_model{

    // =====

    class model_window : public Gtk::Window{
    public:
        model_window();
    };

    // =====

    class model_area : public Gtk::DrawingArea{
    public:
        model_area();
        void(*draw_func)(const Cairo_C &);
    protected:
        bool on_draw(const Cairo_C &);
    };


    // =====

    class model_launcher{
    public:
        model_launcher(int, char**);
        Glib::RefPtr<Gtk::Application> app;
    };

    // =====

    class model{

    protected:
        model_launcher launcher;
        model_window   window;
        model_area     area;

    public:
        model();
        void run(void(*)(const Cairo_C &));
        
    };

    
}
