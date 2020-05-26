
#include <gtkmm.h>
#include "model_class.cpp"

Cairomm_model::model md;

void func(const Cairo_C & cr){
    
}

int main(){
    md.run(func);
}