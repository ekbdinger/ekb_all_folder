$Id: README.txt,v 1.2 2008/04/30 18:01:03 jpetso Exp $

Duration - A form element and CCK field for entering time durations.


SHORT DESCRIPTION
-----------------
Duration is a set of three modules, each for a different target audience:

* duration_api provides a reusable Duration class and formatter functions
  for developers who need to do internal date calculations and conversions.

* duration_element depends on duration_api and provides a set of
  form elements for entering durations, to be used in custom forms.

* duration depends on both of the above and assembles the pieces into
  a CCK field, not requiring a single line of code to use it.

In order to add a new CCK field, go to the "Add fields" form and select
any widget for the "Duration" field type. Configure, use, rejoice.

Developers can find the API documentation inside the module files,
examples for using the form elements are provided in duration.example.


AUTHOR & MAINTAINER
-------------------
Jakob Petsovits <jpetso at gmx DOT at>


THANKS TO
---------
Thomas Miedema (http://drupal.org/user/145877 - thomie) for providing
his unpublished cck_duration module. No actual code was taken from that
module, but it contains a number of good ideas that changed this module
to the better.
