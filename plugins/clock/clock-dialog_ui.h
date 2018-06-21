/* automatically generated from clock-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (clock_dialog_ui)
#endif
#ifdef __GNUC__
static const char clock_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char clock_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"2.24\"/><object class=\"XfceTitledDialog\" id=\"dialog\""
  "><property name=\"can_focus\">False</property><property name=\"title\" "
  "translatable=\"yes\">Clock</property><property name=\"icon_name\">gtk-p"
  "roperties</property><property name=\"type_hint\">normal</property><chil"
  "d internal-child=\"vbox\"><object class=\"GtkVBox\" id=\"dialog-vbox2\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"spacing\">2</property><child internal"
  "-child=\"action_area\"><object class=\"GtkHButtonBox\" id=\"dialog-acti"
  "on_area2\"><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">False</property><property name=\"layout_style\">end</propert"
  "y><child><object class=\"GtkButton\" id=\"close-button\"><property name"
  "=\"label\">gtk-close</property><property name=\"use_action_appearance\""
  ">False</property><property name=\"visible\">True</property><property na"
  "me=\"can_focus\">True</property><property name=\"receives_default\">Tru"
  "e</property><property name=\"use_stock\">True</property></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Fa"
  "lse</property><property name=\"position\">0</property></packing></child"
  "><child><object class=\"GtkButton\" id=\"help-button\"><property name=\""
  "label\">gtk-help</property><property name=\"use_action_appearance\">Fal"
  "se</property><property name=\"visible\">True</property><property name=\""
  "can_focus\">True</property><property name=\"receives_default\">True</pr"
  "operty><property name=\"use_stock\">True</property></object><packing><p"
  "roperty name=\"expand\">False</property><property name=\"fill\">False</"
  "property><property name=\"position\">1</property><property name=\"secon"
  "dary\">True</property></packing></child></object><packing><property nam"
  "e=\"expand\">False</property><property name=\"fill\">True</property><pr"
  "operty name=\"pack_type\">end</property><property name=\"position\">0</"
  "property></packing></child><child><object class=\"GtkVBox\" id=\"vbox1\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"border_width\">6</property><property "
  "name=\"spacing\">6</property><child><object class=\"GtkFrame\" id=\"fra"
  "me2\"><property name=\"visible\">True</property><property name=\"can_fo"
  "cus\">False</property><property name=\"label_xalign\">0</property><prop"
  "erty name=\"shadow_type\">none</property><child><object class=\"GtkAlig"
  "nment\" id=\"alignment2\"><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">False</property><property name=\"left_padding"
  "\">12</property><child><object class=\"GtkTable\" id=\"table1\"><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">False</"
  "property><property name=\"border_width\">6</property><property name=\"n"
  "_rows\">2</property><property name=\"n_columns\">2</property><property "
  "name=\"column_spacing\">12</property><property name=\"row_spacing\">6</"
  "property><child><object class=\"GtkEntry\" id=\"timezone-name\"><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">True</p"
  "roperty><property name=\"tooltip_text\" translatable=\"yes\">Name of a "
  "timezone corresponding a file in the zoneinfo database, for example \"A"
  "merica/New_York\". Leave empty to use the localtime.</property><propert"
  "y name=\"invisible_char\">\342\227\217</property><property name=\"prima"
  "ry_icon_activatable\">False</property><property name=\"secondary_icon_a"
  "ctivatable\">False</property><property name=\"primary_icon_sensitive\">"
  "True</property><property name=\"secondary_icon_sensitive\">True</proper"
  "ty></object><packing><property name=\"left_attach\">1</property><proper"
  "ty name=\"right_attach\">2</property></packing></child><child><object c"
  "lass=\"GtkLabel\" id=\"label9\"><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">False</property><property name=\"xalign"
  "\">0</property><property name=\"label\" translatable=\"yes\">Time_zone:"
  "</property><property name=\"use_underline\">True</property><property na"
  "me=\"mnemonic_widget\">timezone-name</property></object><packing><prope"
  "rty name=\"x_options\">GTK_FILL</property></packing></child><child><obj"
  "ect class=\"GtkAlignment\" id=\"alignment4\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><property "
  "name=\"xalign\">0</property><property name=\"xscale\">0</property><chil"
  "d><object class=\"GtkButton\" id=\"run-time-config-tool\"><property nam"
  "e=\"label\" translatable=\"yes\">Time and Date _Settings...</property><"
  "property name=\"use_action_appearance\">False</property><property name="
  "\"visible\">True</property><property name=\"can_focus\">True</property>"
  "<property name=\"receives_default\">True</property><property name=\"ima"
  "ge\">image1</property><property name=\"use_underline\">True</property><"
  "/object></child></object><packing><property name=\"right_attach\">2</pr"
  "operty><property name=\"top_attach\">1</property><property name=\"botto"
  "m_attach\">2</property><property name=\"x_options\">GTK_FILL</property>"
  "</packing></child></object></child></object></child><child type=\"label"
  "\"><object class=\"GtkLabel\" id=\"label6\"><property name=\"visible\">"
  "True</property><property name=\"can_focus\">False</property><property n"
  "ame=\"label\" translatable=\"yes\">Time Settings</property><attributes>"
  "<attribute name=\"weight\" value=\"bold\"/></attributes></object></chil"
  "d></object><packing><property name=\"expand\">False</property><property"
  " name=\"fill\">True</property><property name=\"position\">0</property><"
  "/packing></child><child><object class=\"GtkFrame\" id=\"frame3\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">False<"
  "/property><property name=\"label_xalign\">0</property><property name=\""
  "shadow_type\">none</property><child><object class=\"GtkAlignment\" id=\""
  "alignment3\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"left_padding\">12</propert"
  "y><child><object class=\"GtkTable\" id=\"table2\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">False</property><prop"
  "erty name=\"border_width\">6</property><property name=\"n_rows\">4</pro"
  "perty><property name=\"n_columns\">2</property><property name=\"column_"
  "spacing\">12</property><property name=\"row_spacing\">6</property><chil"
  "d><placeholder/></child><child><placeholder/></child><child><placeholde"
  "r/></child><child><object class=\"GtkLabel\" id=\"label2\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">False</prope"
  "rty><property name=\"xalign\">0</property><property name=\"label\" tran"
  "slatable=\"yes\">_Layout:</property><property name=\"use_underline\">Tr"
  "ue</property><property name=\"mnemonic_widget\">mode</property></object"
  "><packing><property name=\"x_options\">GTK_FILL</property></packing></c"
  "hild><child><object class=\"GtkComboBox\" id=\"mode\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"model\">mode-model</property><child><object class=\"Gtk"
  "CellRendererText\" id=\"cellrenderertext1\"/><attributes><attribute nam"
  "e=\"text\">0</attribute></attributes></child></object><packing><propert"
  "y name=\"left_attach\">1</property><property name=\"right_attach\">2</p"
  "roperty></packing></child><child><object class=\"GtkLabel\" id=\"label4"
  "\"><property name=\"visible\">True</property><property name=\"can_focus"
  "\">False</property><property name=\"xalign\">0</property><property name"
  "=\"label\" translatable=\"yes\">_Tooltip format:</property><property na"
  "me=\"use_underline\">True</property></object><packing><property name=\""
  "top_attach\">1</property><property name=\"bottom_attach\">2</property><"
  "property name=\"x_options\">GTK_FILL</property></packing></child><child"
  "><object class=\"GtkComboBox\" id=\"tooltip-chooser\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "child><object class=\"GtkCellRendererText\" id=\"cellrenderertext2\"/><"
  "attributes><attribute name=\"text\">2</attribute></attributes></child><"
  "/object><packing><property name=\"left_attach\">1</property><property n"
  "ame=\"right_attach\">2</property><property name=\"top_attach\">1</prope"
  "rty><property name=\"bottom_attach\">2</property></packing></child><chi"
  "ld><object class=\"GtkEntry\" id=\"tooltip-format\"><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">True</property><pro"
  "perty name=\"tooltip_text\" translatable=\"yes\">The format describes t"
  "he date and time parts to insert into the panel. For example, %Y will b"
  "e substituted with the year, %m with the month and %d with the day. Sim"
  "ilarly, &lt;b&gt;&lt;/b&gt; tags will make the text bold. See the \"Hel"
  "p\" page for additional information.</property><property name=\"primary"
  "_icon_activatable\">False</property><property name=\"secondary_icon_act"
  "ivatable\">False</property><property name=\"primary_icon_sensitive\">Tr"
  "ue</property><property name=\"secondary_icon_sensitive\">True</property"
  "></object><packing><property name=\"left_attach\">1</property><property"
  " name=\"right_attach\">2</property><property name=\"top_attach\">2</pro"
  "perty><property name=\"bottom_attach\">3</property></packing></child></"
  "object></child></object></child><child type=\"label\"><object class=\"G"
  "tkLabel\" id=\"label1\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"label\" transl"
  "atable=\"yes\">Appearance</property><attributes><attribute name=\"weigh"
  "t\" value=\"bold\"/></attributes></object></child></object><packing><pr"
  "operty name=\"expand\">False</property><property name=\"fill\">True</pr"
  "operty><property name=\"position\">1</property></packing></child><child"
  "><object class=\"GtkFrame\" id=\"frame1\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"label_xalign\">0</property><property name=\"shadow_type\">none</pro"
  "perty><child><object class=\"GtkAlignment\" id=\"alignment1\"><property"
  " name=\"visible\">True</property><property name=\"can_focus\">False</pr"
  "operty><property name=\"left_padding\">12</property><child><object clas"
  "s=\"GtkVBox\" id=\"vbox2\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property><property name=\"border_widt"
  "h\">6</property><property name=\"spacing\">6</property><child><object c"
  "lass=\"GtkCheckButton\" id=\"show-seconds\"><property name=\"label\" tr"
  "anslatable=\"yes\">Display _seconds</property><property name=\"use_acti"
  "on_appearance\">False</property><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">True</property><property name=\"receive"
  "s_default\">False</property><property name=\"use_underline\">True</prop"
  "erty><property name=\"draw_indicator\">True</property></object><packing"
  "><property name=\"expand\">True</property><property name=\"fill\">True<"
  "/property><property name=\"position\">0</property></packing></child><ch"
  "ild><object class=\"GtkCheckButton\" id=\"true-binary\"><property name="
  "\"label\" translatable=\"yes\">True _binary clock</property><property n"
  "ame=\"use_action_appearance\">False</property><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"receives_default\">False</property><property name=\"use_underline"
  "\">True</property><property name=\"draw_indicator\">True</property></ob"
  "ject><packing><property name=\"expand\">True</property><property name=\""
  "fill\">True</property><property name=\"position\">1</property></packing"
  "></child><child><object class=\"GtkCheckButton\" id=\"show-military\"><"
  "property name=\"label\" translatable=\"yes\">24-_hour clock</property><"
  "property name=\"use_action_appearance\">False</property><property name="
  "\"visible\">True</property><property name=\"can_focus\">True</property>"
  "<property name=\"receives_default\">False</property><property name=\"us"
  "e_underline\">True</property><property name=\"draw_indicator\">True</pr"
  "operty></object><packing><property name=\"expand\">True</property><prop"
  "erty name=\"fill\">True</property><property name=\"position\">2</proper"
  "ty></packing></child><child><object class=\"GtkCheckButton\" id=\"flash"
  "-separators\"><property name=\"label\" translatable=\"yes\">Fl_ash time"
  " separators</property><property name=\"use_action_appearance\">False</p"
  "roperty><property name=\"visible\">True</property><property name=\"can_"
  "focus\">True</property><property name=\"receives_default\">False</prope"
  "rty><property name=\"use_underline\">True</property><property name=\"dr"
  "aw_indicator\">True</property></object><packing><property name=\"expand"
  "\">True</property><property name=\"fill\">True</property><property name"
  "=\"position\">3</property></packing></child><child><object class=\"GtkC"
  "heckButton\" id=\"show-meridiem\"><property name=\"label\" translatable"
  "=\"yes\">Sho_w AM/PM</property><property name=\"use_action_appearance\""
  ">False</property><property name=\"visible\">True</property><property na"
  "me=\"can_focus\">True</property><property name=\"receives_default\">Fal"
  "se</property><property name=\"use_underline\">True</property><property "
  "name=\"draw_indicator\">True</property></object><packing><property name"
  "=\"expand\">True</property><property name=\"fill\">True</property><prop"
  "erty name=\"position\">4</property></packing></child><child><object cla"
  "ss=\"GtkTable\" id=\"digital-box\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"n_r"
  "ows\">2</property><property name=\"n_columns\">2</property><property na"
  "me=\"column_spacing\">12</property><property name=\"row_spacing\">6</pr"
  "operty><child><placeholder/></child><child><object class=\"GtkLabel\" i"
  "d=\"label8\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"label\" translatable=\"yes"
  "\">F_ormat:</property><property name=\"use_underline\">True</property><"
  "property name=\"mnemonic_widget\">digital-chooser</property></object><p"
  "acking><property name=\"x_options\">GTK_FILL</property></packing></chil"
  "d><child><object class=\"GtkComboBox\" id=\"digital-chooser\"><property"
  " name=\"visible\">True</property><property name=\"can_focus\">False</pr"
  "operty><child><object class=\"GtkCellRendererText\" id=\"cellrendererte"
  "xt3\"/><attributes><attribute name=\"text\">2</attribute></attributes><"
  "/child></object><packing><property name=\"left_attach\">1</property><pr"
  "operty name=\"right_attach\">2</property></packing></child><child><obje"
  "ct class=\"GtkEntry\" id=\"digital-format\"><property name=\"visible\">"
  "True</property><property name=\"can_focus\">True</property><property na"
  "me=\"tooltip_text\" translatable=\"yes\">The format describes the date "
  "and time parts to insert into the panel. For example, %Y will be substi"
  "tuted with the year, %m with the month and %d with the day. Similarly, "
  "&lt;b&gt;&lt;/b&gt; tags will make the text bold. See the \"Help\" page"
  " for additional information.</property><property name=\"primary_icon_ac"
  "tivatable\">False</property><property name=\"secondary_icon_activatable"
  "\">False</property><property name=\"primary_icon_sensitive\">True</prop"
  "erty><property name=\"secondary_icon_sensitive\">True</property></objec"
  "t><packing><property name=\"left_attach\">1</property><property name=\""
  "right_attach\">2</property><property name=\"top_attach\">1</property><p"
  "roperty name=\"bottom_attach\">2</property></packing></child></object><"
  "packing><property name=\"expand\">True</property><property name=\"fill\""
  ">True</property><property name=\"position\">5</property></packing></chi"
  "ld><child><object class=\"GtkHBox\" id=\"fuzziness-box\"><property name"
  "=\"visible\">True</property><property name=\"can_focus\">False</propert"
  "y><property name=\"spacing\">12</property><child><object class=\"GtkLab"
  "el\" id=\"label5\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"label\" translatabl"
  "e=\"yes\" comments=\"I18N: the fuzziness the *precision* of the fuzzy c"
  "lock. Time steps of 5, 15 or parts of the day.\">F_uzziness:</property>"
  "<property name=\"use_underline\">True</property><property name=\"mnemon"
  "ic_widget\">hscale1</property></object><packing><property name=\"expand"
  "\">False</property><property name=\"fill\">True</property><property nam"
  "e=\"position\">0</property></packing></child><child><object class=\"Gtk"
  "HScale\" id=\"hscale1\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">True</property><property name=\"update_policy\""
  ">delayed</property><property name=\"adjustment\">fuzziness</property><p"
  "roperty name=\"digits\">0</property><property name=\"value_pos\">right<"
  "/property></object><packing><property name=\"expand\">True</property><p"
  "roperty name=\"fill\">True</property><property name=\"position\">1</pro"
  "perty></packing></child></object><packing><property name=\"expand\">Tru"
  "e</property><property name=\"fill\">True</property><property name=\"pos"
  "ition\">6</property></packing></child><child><object class=\"GtkCheckBu"
  "tton\" id=\"show-inactive\"><property name=\"label\" translatable=\"yes"
  "\">Show _inactive dots</property><property name=\"use_action_appearance"
  "\">False</property><property name=\"visible\">True</property><property "
  "name=\"can_focus\">True</property><property name=\"receives_default\">F"
  "alse</property><property name=\"use_underline\">True</property><propert"
  "y name=\"draw_indicator\">True</property></object><packing><property na"
  "me=\"expand\">True</property><property name=\"fill\">True</property><pr"
  "operty name=\"position\">7</property></packing></child><child><object c"
  "lass=\"GtkCheckButton\" id=\"show-grid\"><property name=\"label\" trans"
  "latable=\"yes\">Show gri_d</property><property name=\"use_action_appear"
  "ance\">False</property><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">True</property><property name=\"receives_default"
  "\">False</property><property name=\"use_underline\">True</property><pro"
  "perty name=\"draw_indicator\">True</property></object><packing><propert"
  "y name=\"expand\">True</property><property name=\"fill\">True</property"
  "><property name=\"position\">8</property></packing></child></object></c"
  "hild></object></child><child type=\"label\"><object class=\"GtkLabel\" "
  "id=\"label3\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"label\" translatable=\"y"
  "es\">Clock Options</property><attributes><attribute name=\"weight\" val"
  "ue=\"bold\"/></attributes></object></child></object><packing><property "
  "name=\"expand\">False</property><property name=\"fill\">True</property>"
  "<property name=\"position\">2</property></packing></child></object><pac"
  "king><property name=\"expand\">True</property><property name=\"fill\">T"
  "rue</property><property name=\"position\">1</property></packing></child"
  "></object></child><action-widgets><action-widget response=\"0\">close-b"
  "utton</action-widget><action-widget response=\"0\">help-button</action-"
  "widget></action-widgets></object><object class=\"GtkAdjustment\" id=\"f"
  "uzziness\"><property name=\"upper\">3</property><property name=\"step_i"
  "ncrement\">1</property><property name=\"page_increment\">1</property><p"
  "roperty name=\"page_size\">1</property></object><object class=\"GtkImag"
  "e\" id=\"image1\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"icon_name\">time-adm"
  "in</property></object><object class=\"GtkListStore\" id=\"mode-model\">"
  "<columns><column type=\"gchararray\"/></columns><data><row><col id=\"0\""
  " translatable=\"yes\">Analog</col></row><row><col id=\"0\" translatable"
  "=\"yes\">Binary</col></row><row><col id=\"0\" translatable=\"yes\">Digi"
  "tal</col></row><row><col id=\"0\" translatable=\"yes\">Fuzzy</col></row"
  "><row><col id=\"0\" translatable=\"yes\">LCD</col></row></data></object"
  "></interface>"
};

static const unsigned clock_dialog_ui_length = 18720u;

