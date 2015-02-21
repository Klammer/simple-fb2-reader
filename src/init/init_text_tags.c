#include "../chunks.h"

int create_fb2_tags(GtkTextBuffer* text_buff)
{
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "default_tag", 		"size-points",			15.f,
																"family",				"DejaVu",
																"wrap_mode",			GTK_WRAP_WORD_CHAR, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "title_tag", 			"size-points",			17.f,
																"justification",		GTK_JUSTIFY_CENTER, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "strong_tag", 		"weight",				PANGO_WEIGHT_BOLD, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "sub_tag", 			"size-points",			8.f,
																"rise",					-5000, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "sup_tag", 			"size-points",			8.f,
																"rise",					7000, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "strikethrough_tag", 	"strikethrough",		TRUE, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "emphasis_tag", 		"style",				PANGO_STYLE_ITALIC, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "code_tag", 			"family",				"Mono", NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "subtitle_tag", 		"justification",		GTK_JUSTIFY_CENTER, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "image_tag", 			"size-points",			10.f,
																"justification",		GTK_JUSTIFY_CENTER, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "cite_tag", 			"size-points",			15.f,
																"style",				PANGO_STYLE_ITALIC, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "text_author_tag", 	"size-points",			12.f,
																"justification",		GTK_JUSTIFY_RIGHT, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "epigraph_tag", 		"accumulative-margin",	TRUE,
																"left-margin",			40,
																"right-margin",			40, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "stanza_tag", 		"style",				PANGO_STYLE_ITALIC,
																"justification",		GTK_JUSTIFY_CENTER, NULL);
	//####################################################################################################################################
	gtk_text_buffer_create_tag(text_buff, "table_tag", 			"family",				"Mono",
																"wrap_mode",			GTK_WRAP_NONE, NULL);
	//####################################################################################################################################

	return 0;
}