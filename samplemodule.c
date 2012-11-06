#include "ruby.h"

VALUE SampleModule = Qnil;

void Init_SampleModule();

VALUE method_test(VALUE self);

void Init_SampleModule()
{
  SampleModule = rb_define_module("SampleModule");
  rb_define_method(SampleModule, "test", method_test, 0);
}

VALUE method_test(VALUE self)
{
  int x = 10;
  return INT2NUM(x);
}
