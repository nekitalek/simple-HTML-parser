#pragma once
#include <map>
#include <string>
#include <vector>

using namespace std;

#define LANGUAGE_CODE \
"(ab|az|ay|sq|en|en-us|ar|hy|as|af|ba|be|bn|bg|br|cy|hu|vi|gl|\
nl|el|ka|gn|da|zu|iw|ji|in|ia|ga|is|es|it|kk|km|ca|ks|qu|ky|\
zh|ko|co|ku|lo|lv|la|lt|mg|ms|mt|mi|mk|mo|mn|na|de|ne|no|pa|\
fa|pl|ps|rm|ro|ru|sm|sa|sr|sk|sl|so|sw|su|tl|tg|th|ta|tt|bo|\
to|tr|tk|uz|uk|ur|fj|fi|fr|fy|ha|hi|hr|cs|sv|eo|et|jw|ja|en-au)"

#define MIME_TYPE \
"(application/postscript|\
audio/aiff|\
audio/x-aiff|\
application/x-navi-animation|\
application/x-nokia-9000-communicator-add-on-software|\
application/mime|\
application/octet-stream|\
application/arj|\
image/x-jg|\
video/x-ms-asf|\
text/x-asm|\
text/asp|\
application/x-mplayer2|\
video/x-ms-asf-plugin|\
audio/basic|\
audio/x-au|\
application/x-troff-msvideo|\
video/avi|\
video/msvideo|\
video/x-msvideo|\
application/mac-binary|\
application/macbinary|\
application/x-binary|\
application/x-macbinary|\
image/bmp|\
image/x-windows-bmp|\
application/book|\
text/x-c|\
text/plain|\
application/clariscad|\
application/java|\
application/java-byte-code|\
application/x-java-class|\
application/mac-compactpro|\
application/x-compactpro|\
application/x-cpt|\
application/x-pointplus|\
text/css|\
application/x-director|\
video/x-dv|\
video/dl|\
video/x-dl|\
application/msword|\
application/drafting|\
application/x-dvi|\
application/acad|\
image/vnd.dwg|\
image/x-dwg|\
application/dxf|\
image/gif|\
application/x-compressed|\
application/x-gzip|\
multipart/x-gzip|\
text/x-h|\
application/hlp|\
application/x-helpfile|\
application/x-winhelp|\
text/x-component|\
text/html|\
text/webviewhtml|\
x-conference/x-cooltalk|\
image/x-icon|\
application/inf|\
audio/x-jam|\
text/x-java-source|\
application/x-java-commerce|\
image/jpeg|\
image/pjpeg|\
image/x-jps|\
application/x-javascript|\
application/javascript|\
application/ecmascript|\
text/javascript|\
text/ecmascript|\
application/x-latex|\
application/lha|\
application/x-lha|\
application/x-lisp|\
text/x-script.lisp|\
application/x-lzh|\
application/lzx|\
application/x-lzx|\
audio/x-mpequrl|\
application/x-troff-man|\
application/x-midi|\
audio/midi|\
audio/x-mid|\
audio/x-midi|\
music/crescendo|\
x-music/x-midi|\
audio/mod|\
audio/x-mod|\
video/quicktime|\
video/x-sgi-movie|\
audio/mpeg|\
audio/x-mpeg|\
video/mpeg|\
video/x-mpeg|\
video/x-mpeq2a|\
audio/mpeg3|\
audio/x-mpeg-3|\
video/mp4|\
text/pascal|\
application/vnd.hp-pcl|\
application/x-pcl|\
image/x-pict|\
image/x-pcx|\
application/pdf|\
image/pict|\
text/x-script.perl|\
image/x-xpixmap|\
text/x-script.perl-module|\
application/x-pagemaker|\
image/png|\
application/mspowerpoint|\
application/vnd.ms-powerpoint|\
application/powerpoint|\
application/x-mspowerpoint|\
text/x-script.phyton|\
applicaiton/x-bytecode.python|\
image/x-quicktime|\
audio/x-pn-realaudio|\
audio/x-pn-realaudio-plugin|\
audio/x-realaudio|\
application/vnd.rn-realmedia|\
application/rtf|\
application/x-rtf|\
text/richtext|\
video/vnd.rn-realvideo|\
text/sgml|\
text/x-sgml|\
application/x-bsh|\
application/x-sh|\
application/x-shar|\
text/x-script.sh|\
text/x-server-parsed-html|\
application/x-tar|\
application/x-tcl|\
text/x-script.tcl|\
application/plain|\
application/gnutar|\
image/tiff|\
image/x-tiff|\
text/uri-list|\
application/x-cdlink|\
application/vocaltec-media-desc|\
application/x-vrml|\
model/vrml|\
x-world/x-vrml|\
application/x-visio|\
audio/wav|\
audio/x-wav|\
windows/metafile|\
application/excel|\
application/x-excel|\
application/x-msexcel|\
application/vnd.ms-excel|\
audio/xm|\
application/xml|\
text/xml|\
application/x-compress|\
application/x-zip-compressed|\
application/zip|\
multipart/x-zip)"

#define DATE_TIME \
"([0-9]{4}|\
[0-9]{4}\-[0-9]{2}|\
[0-9]{4}\-[0-9]{2}\-[0-9]{2}|\
[0-9]{4}\-[0-9]{2}\-[0-9]{2}T[0-9]{2}:[0-9]{2}|\
[0-9]{4}\-[0-9]{2}\-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}|\
[0-9]{4}\-[0-9]{2}\-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}(\\+|\-)[0-2][0-4]:[0-5][0-9])"

#define ANY_TEXT            ".*"
#define CHAR_SET            "(iso 646|ISO 646|ascii|ASCII|bcdic||BCDIC|ebcdic|EBCDIC|windows-125[0-8]|WINDOWS-125[0-8]|koi8|KOI8|iscii|ISCII|viscii|VISCII|big5|utf-8|UTF-8|utf-16|UTF-16|utf-32|UTF-32|unicode|UNICODE)"
#define PATH                "^(.*/)?(?:$|(.+?)(?:(\.[^.]*$)|$))" 
#define COLOR               "(#[a-f0-9A-F]{1,6}|aqua|black|blue|fuchsia|gray|green|lime|maroon|navy|olive|purple|red|silver|teal|white|yellow|)"
#define INTEGER             "-?[0-9]+"
#define POSITIVE_INTEGER    "[0-9]+"
#define URL                 ANY_TEXT 
#define IDENTIFIER          "[a-zA-Z][a-zA-Zа-яА-Я0-9_-]*"         
#define INTEGER_OR_PERCENT  "[0-9%]+"
#define SCRIPT              ANY_TEXT 


#define ATTR_ACCESS_KEY_VALS          ("[0-9a-z]"                      )  // +++++ Число от 0 до 9 или маленькая латинская буква
#define ATTR_CLASS_VALS               ("([0-9a-zA-Z-_ ]+|)"            )  
#define ATTR_CONTENTEDITABLE_VALS     ("(true|false|)"                 )  // +++++ "true" , "false" или пустая строка
#define ATTR_CONTEXTMENU_VALS         ("[a-zA-Z]+"                     )  // !!!!! тут более сложная логика, доделать похже
#define ATTR_DIR_VALS                 ("(ltr|rtl)"                     )  // +++++ "ltr" или "rtl"
#define ATTR_HIDDEN_VALS              ("(hidden|)"                     )  // может вообще быть без строки, надо чекать выше по логике, доделать позже
#define ATTR_ID_VALS                  ("([a-zA-Z][a-zA-Z0-9-_]*|)"     )  // +++++ Начинается с буквы, дальше буква или цифра или тире или _
#define ATTR_LANG_VALS                LANGUAGE_CODE
#define ATTR_SPELLCHECK_VALS          ("(true|false|)"                 )  // "true" , "false" или пустая строка
#define ATTR_STYLE_VALS               ANY_TEXT
#define ATTR_TABINDEX_VALS            ("[0-9]+"                        )  // positive integer value
#define ATTR_TITLE_VALS               ANY_TEXT
#define ATTR_XMLLANG_VALS             LANGUAGE_CODE                       
#define ATTR_ONBLUR_VARS              SCRIPT
#define ATTR_ONCHANGE_VARS            SCRIPT
#define ATTR_ONCLICK_VALS             SCRIPT
#define ATTR_ONBLCLICK_VALS           SCRIPT
#define ATTR_ONFOCUS_VALS             SCRIPT
#define ATTR_ONKEYDOWN_VALS           SCRIPT
#define ATTR_ONKEYPRESS_VALS          SCRIPT
#define ATTR_ONKEYUP_VALS             SCRIPT
#define ATTR_ONLOAD_VALS              SCRIPT
#define ATTR_ONMOUSEDOWN_VALS         SCRIPT
#define ATTR_ONMOUSEMOVE_VALS         SCRIPT
#define ATTR_ONMOUSEOUT_VALS          SCRIPT
#define ATTR_ONMOUSEOVER_VALS         SCRIPT
#define ATTR_ONMOUSEUP_VALS           SCRIPT
#define ATTR_ONMOUSELEAVE_VALS        SCRIPT
#define ATTR_ONRESET_VALS             SCRIPT
#define ATTR_ONSELECT_VALS            SCRIPT
#define ATTR_ONSUBMIT_VALS            SCRIPT
#define ATTR_ONUNLOAD_VALS            SCRIPT
#define ATTR_ACCEPT_VALS              MIME_TYPE
#define ATTR_ACCEPTCHARSET_VALS       CHAR_SET
#define ATTR_ACTION_VALS              URL 
#define ATTR_ALIGN_VALS               ("(bottom|left|middle|right|top|center|justify|top)")  
#define ATTR_ALINK_VALS               COLOR
#define ATTR_ALLOWTRANSPARENCY_VALS   ("(allowtransparency|)"          ) 
#define ATTR_ALT_VALS                 ANY_TEXT
#define ATTR_ARCHIVE_VALS             PATH                               
#define ATTR_ASYNC_VALS               ("(async|)"                      ) 
#define ATTR_AUTOCOMPLETE_VALS        ("(on|off)"                      )
#define ATTR_AUTOFOCUS_VALS           ("(autofocus|)"                  ) 
#define ATTR_AUTOPLAY_VALS            ("(autoplay|)"                   ) 
#define ATTR_AXIS_VALS                ("[a-zA-Z]*"                     )
#define ATTR_BACKGROUND_VALS          URL
#define ATTR_BALANCE_VALS             ANY_TEXT
#define ATTR_BEHAVIOR_VALS            ("(alternate|scroll|slide|)"     )
#define ATTR_BGCOLOR_VALS             COLOR
#define ATTR_BGPROPERTIES_VALS        ("(fixed|)"                      )
#define ATTR_BORDER_VALS              POSITIVE_INTEGER
#define ATTR_BORDERCOLOR_VALS         COLOR
#define ATTR_BOOTONMARGIN_VALS        ANY_TEXT
#define ATTR_CHALLENGE_VALS           ("[a-zA-Z]*"                     )
#define ATTR_CHAR_VALS                ("[a-zA-Z]"                      ) 
#define ATTR_CHAROFF_VALS             INTEGER
#define ATTR_CHARSET_VALS             CHAR_SET
#define ATTR_CHECKED_VALS             ("(checked|)"                    )
#define ATTR_CELLPADDING_VALS         INTEGER_OR_PERCENT
#define ATTR_CELLSPACING_VALS         POSITIVE_INTEGER
#define ATTR_CITE_VALS                PATH                                
#define ATTR_CLASSID_VALS             PATH                                
#define ATTR_CLEAR_VALS               ("(all|left|right|none)"         )
#define ATTR_CODE_VALS                ANY_TEXT
#define ATTR_CODEBASE_VALS            PATH
#define ATTR_CODETYPE_VALS            MIME_TYPE 
#define ATTR_CONTENT_VALS             ANY_TEXT
#define ATTR_CONTROLS_VALS            ("(controls|)"                   )
#define ATTR_COLOR_VALS               COLOR
#define ATTR_COLS_VALS                POSITIVE_INTEGER
#define ATTR_CLOSPAN_VALS             POSITIVE_INTEGER
#define ATTR_COORDS_VALS              ("[0-9,]+"                       )  
#define ATTR_DATA_VALS                ANY_TEXT
#define ATTR_DATETIME_VALS            DATE_TIME
#define ATTR_DEFAULT_VALS             ("(default|)") 
#define ATTR_DEFER_VALS               ("(defer|)") 
#define ATTR_DIRECTION_VALS           ("(down|left|right|up|)")
#define ATTR_DISABLED_VALS            ("(disabled|)") 
#define ATTR_DOWNLOAD_VALS            ("") // вообще нет и присвоить себе нельзя
#define ATTR_ENCTYPE_VALS             ("(application/x-www-form-urlencoded|multipart/form-data|text/plain|)")
#define ATTR_FACE_VALS                ANY_TEXT
#define ATTR_FRAME_VALS               ("(void|border|above|below|hsides|vsides|rhs|lhs|)")
#define ATTR_FRAMEBORDER_VALS         ("(yes|no|0|1|)")
#define ATTR_FRAMESPACING_VALS        POSITIVE_INTEGER
#define ATTR_FOR_VALS                 IDENTIFIER
#define ATTR_FORM_VALS                IDENTIFIER
#define ATTR_FORMACTION_VALS          URL
#define ATTR_FORMENCTYPE_VALS         ("(application/x-www-form-urlencoded|multipart/form-data|text/plain|)")
#define ATTR_FORMMETHOD_VALS          ("(get|post|GET|POST)")
#define ATTR_FORMOVALIDATE_VALS       ANY_TEXT 
#define ATTR_FORMTARGET_VALS          ("([a-zA-Z]|_blank|_self|_parent|_top)")
#define ATTR_GUTTER_VALS              ANY_TEXT 
#define ATTR_HEADERS_VALS             IDENTIFIER  
#define ATTR_HEIGHT_VALS              ANY_TEXT
#define ATTR_HREF_VALS                URL
#define ATTR_HREFLANG_VALS            LANGUAGE_CODE
#define ATTR_HSPACE_VALS              POSITIVE_INTEGER
#define ATTR_HTTPEQUIV_VALS           IDENTIFIER
#define ATTR_ICON_VALS                ANY_TEXT 
#define ATTR_ISMAP_VALS               ("(ismap|)") 
#define ATTR_KEYTYPE_VALS             IDENTIFIER
#define ATTR_KIND_VALS                IDENTIFIER
#define ATTR_LABEL_VALS               ("[a-zA-Z]*") // кавычки обязательно
#define ATTR_LANGUAGE_VALS            ("(JavaScript|JScript|VBS|VBScript|)")
#define ATTR_LEFTMARGIN_VALS          POSITIVE_INTEGER
#define ATTR_LINK_VALS                COLOR
#define ATTR_LIST_VALS                IDENTIFIER
#define ATTR_LONGDESC_VALS            PATH
#define ATTR_LOOP_VALS                ("(loop|)")
#define ATTR_LOW_VALS                 ("\-?\d+(\.\d{0,})?"             )  
#define ATTR_LOWSRC_VALS              PATH 
#define ATTR_MANIFEST_VALS            URL
#define ATTR_MARGINHEIGHT_VALS        POSITIVE_INTEGER
#define ATTR_MARGINWIDTH_VALS         POSITIVE_INTEGER
#define ATTR_MAX_VALS                 POSITIVE_INTEGER
#define ATTR_MAXLEGHT_VALS            POSITIVE_INTEGER
#define ATTR_MEDIA_VALS               ("(all|braille|handheld|print|screen|speech|projection|tty|tv|)")
#define ATTR_METHOD_VALS              ("(get|post|)")
#define ATTR_MIN_VALS                 POSITIVE_INTEGER
#define ATTR_MULTIPLE_VALS            ("(multiple|)") 
#define ATTR_MUTED_VALS               ("(muted|)")
#define ATTR_NAME_VALS                ANY_TEXT
#define ATTR_NOHREF_VALS              ("(nohref|)")
#define ATTR_NORESIZE_VALS            ("(noresize|)")
#define ATTR_NOSHADE_VALS             ("(noshade|)")
#define ATTR_NOVALIDATE_VALS          ("(novalidate|)")
#define ATTR_NOWRAP_VALS              ("(nowrap|)")
#define ATTR_OPEN_VALS                ("(open|)") 
#define ATTR_OPTIMUM_VALS             ("(optimum|)") 
#define ATTR_PATTERN_VALS             ANY_TEXT   
#define ATTR_PLACEHOLDER_VALS         ANY_TEXT
#define ATTR_PLUGINSPAGE_VALS         URL
#define ATTR_POSTER_VALS              PATH
#define ATTR_PRELOAD_VALS             ("(none|metadata|auto|)")
#define ATTR_PROMPT_VALS              ANY_TEXT
#define ATTR_PUBDATE_VALS             ("(pubdate|)") 
#define ATTR_RADIOGROUP_VALS          ANY_TEXT  
#define ATTR_READONLY_VALS            ("(readonly|)") 
#define ATTR_REL_VALS                 ("(answer|chapter|co-worker|colleague|contact|details|edit|friend|question|archives|author|bookmark|first|help|index|last|license|me|next|nofollow|noreferrer|prefetch|prev|search|sidebar|tag|up|apple-touch-icon|stylesheet)")		      
#define ATTR_REQUIRED_VALS            ("(required|)") 
#define ATTR_RESERVED_VALS            ("(reserved|)") 
#define ATTR_RIGHTMARGIN_VALS         POSITIVE_INTEGER
#define ATTR_ROWS_VALS                ANY_TEXT	      
#define ATTR_ROWSPAN_VALS             POSITIVE_INTEGER     
#define ATTR_RULES_VALS               ("(all|groups|cols|none|rows)")
#define ATTR_SANDBOX_VALS             ("(allow-same-origin|allow-top-navigation|allow-forms|allow-scripts)")
#define ATTR_SCOPE_VALS               ("(col|colgroup|row|rowgroup)")
#define ATTR_SCROLL_VALS              ("(yes|no)")
#define ATTR_SCROLLAMOUNT_VALS        POSITIVE_INTEGER
#define ATTR_SCROLLDELAY_VALS         POSITIVE_INTEGER
#define ATTR_SCROLLING_VALS           ("(auto|no|yes)")
#define ATTR_SHAPE_VALS               ("(circle|default|poly|rect)")
#define ATTR_SEAMLESS_VALS            ("(seamless|)") 
#define ATTR_SELECTED_VALS            ("(selected|)") 
#define ATTR_SIZE_VALS                POSITIVE_INTEGER     
#define ATTR_SIZES_VALS               ("([0-9]+x[0-9]+)+")   
#define ATTR_SPAN_VALS                POSITIVE_INTEGER
#define ATTR_SRC_VALS                 PATH
#define ATTR_SRCLANG_VALS             LANGUAGE_CODE       
#define ATTR_SRCDOC_VALS              ANY_TEXT // html код        
#define ATTR_START_VALS               POSITIVE_INTEGER
#define ATTR_STEP_VALS                INTEGER // целое или дробное!!        
#define ATTR_SUMMARY_VALS             ("(summary|)")  
#define ATTR_TARGET_VALS              ("(_blank|_self|_parent|_top)")
#define ATTR_TEXT_VALS                COLOR
#define ATTR_TOPMARGIN_VALS           POSITIVE_INTEGER
#define ATTR_TRUESPEED_VALS           ("(truespeed|)") 
#define ATTR_TYPE_VALS                ("(button|checkbox|file|hidden|image|password|radio|reset|submit|text|color|date|datetime|datetime|email|number|range|search|tel|time|url|month|week|internal/link|text/javascript|text/css|A|a|I|i|1)")
#define ATTR_USEMAP_VALS              ("#[a-zA-Z]+")
#define ATTR_VALIGN_VALS              ("(top|middle|bottom|baseline)")
#define ATTR_VALUE_VALS               ANY_TEXT
#define ATTR_VALUETYPE_VALS           ("(data|object|ref|)")
#define ATTR_VLINK_VALS               COLOR
#define ATTR_VOLUME_VALS              INTEGER	      
#define ATTR_VSPACE_VALS              INTEGER
#define ATTR_WIDTH_VALS               ANY_TEXT	      
#define ATTR_WRAP_VALS                ("(soft|hard|off|)")
#define ATTR_XMLNS_VALS               URL
#define ATTR_ABBR_VALS                ANY_TEXT
#define ATTR_ARIA_LABEL_VALS          ANY_TEXT
#define ATTR_ARIA_HASPOPUP_VALS       ANY_TEXT
#define ATTR_ONTOUCHSTART_VALS        ANY_TEXT

static map<string, string> ATTR_DATABASE =                                   
{                                                                
	{  "accesskey"          , ATTR_ACCESS_KEY_VALS           },  
	{  "class"              , ATTR_CLASS_VALS                },  
	{  "contenteditable"    , ATTR_CONTENTEDITABLE_VALS      },  
	{  "contextmenu"        , ATTR_CONTEXTMENU_VALS          },  
	{  "dir"                , ATTR_DIR_VALS                  },  
	{  "hidden"             , ATTR_HIDDEN_VALS               },  
	{  "id"                 , ATTR_ID_VALS                   },  
	{  "lang"               , ATTR_LANG_VALS                 },  
	{  "spellcheck"         , ATTR_SPELLCHECK_VALS           },  
	{  "style"              , ATTR_STYLE_VALS                },  
	{  "tabindex"           , ATTR_TABINDEX_VALS             },  
	{  "title"              , ATTR_TITLE_VALS                },  
	{  "xml:lang"           , ATTR_XMLLANG_VALS              },  
	{  "onblur"             , ATTR_ONBLUR_VARS               },  
	{  "onchange"           , ATTR_ONCHANGE_VARS             },  
	{  "onclick"            , ATTR_ONCLICK_VALS              },  
	{  "ondblclick"         , ATTR_ONBLCLICK_VALS            },  
	{  "onfocus"            , ATTR_ONFOCUS_VALS              },  
	{  "onkeydown"          , ATTR_ONKEYDOWN_VALS            },  
	{  "onkeypress"         , ATTR_ONKEYPRESS_VALS           },  
	{  "onkeyup"            , ATTR_ONKEYUP_VALS              },  
	{  "onload"             , ATTR_ONLOAD_VALS               },  
	{  "onmousedown"        , ATTR_ONMOUSEDOWN_VALS          },  
	{  "onmousemove"        , ATTR_ONMOUSEMOVE_VALS          },  
	{  "onmouseout"         , ATTR_ONMOUSEOUT_VALS           },  
	{  "onmouseover"        , ATTR_ONMOUSEOVER_VALS          },  
	{  "onmouseup"          , ATTR_ONMOUSEUP_VALS            },  
	{  "onreset"            , ATTR_ONRESET_VALS              },  
	{  "onselect"           , ATTR_ONSELECT_VALS             },  
	{  "onsubmit"           , ATTR_ONSUBMIT_VALS             },  
	{  "onunload"           , ATTR_ONUNLOAD_VALS             },  
	{  "abbr"               , ATTR_ABBR_VALS                 },  
	{  "accept"             , ATTR_ACCEPT_VALS               },  
	{  "accept-charset"     , ATTR_ACCEPTCHARSET_VALS        },  
	{  "action"             , ATTR_ACTION_VALS               },  
	{  "align"              , ATTR_ALIGN_VALS                },  
	{  "alink"              , ATTR_ALINK_VALS                },  
	{  "allowtransparency"  , ATTR_ALLOWTRANSPARENCY_VALS    },  
	{  "alt"                , ATTR_ALT_VALS                  },  
	{  "archive"            , ATTR_ARCHIVE_VALS              },  
	{  "async"              , ATTR_ASYNC_VALS                },  
	{  "autocomplete"       , ATTR_AUTOCOMPLETE_VALS         },  
	{  "autofocus"          , ATTR_AUTOFOCUS_VALS            },  
	{  "autoplay"           , ATTR_AUTOPLAY_VALS             },  
	{  "axis"               , ATTR_AXIS_VALS                 },  
	{  "background"         , ATTR_BACKGROUND_VALS           },  
	{  "balance"            , ATTR_BALANCE_VALS              },  
	{  "behavior"           , ATTR_BEHAVIOR_VALS             },  
	{  "bgcolor"            , ATTR_BGCOLOR_VALS              },  
	{  "bgproperties"       , ATTR_BGPROPERTIES_VALS         },  
	{  "border"             , ATTR_BORDER_VALS               },  
	{  "bordercolor"        , ATTR_BORDERCOLOR_VALS          },  
	{  "bottommargin"       , ATTR_BOOTONMARGIN_VALS         },  
	{  "challenge"          , ATTR_CHALLENGE_VALS            },  
	{  "char"               , ATTR_CHAR_VALS                 },  
	{  "charoff"            , ATTR_CHAROFF_VALS              },  
	{  "charset"            , ATTR_CHARSET_VALS              },  
	{  "checked"            , ATTR_CHECKED_VALS              },  
	{  "cellpadding"        , ATTR_CELLPADDING_VALS          },  
	{  "cellspacing"        , ATTR_CELLSPACING_VALS          },  
	{  "cite"               , ATTR_CITE_VALS                 },  
	{  "classid"            , ATTR_CLASSID_VALS              },  
	{  "clear"              , ATTR_CLEAR_VALS                },  
	{  "code"               , ATTR_CODE_VALS                 },  
	{  "codebase"           , ATTR_CODEBASE_VALS             },  
	{  "codetype"           , ATTR_CODETYPE_VALS             },  
	{  "content"            , ATTR_CONTENT_VALS              },  
	{  "controls"           , ATTR_CONTROLS_VALS             },  
	{  "color"              , ATTR_COLOR_VALS                },  
	{  "cols"               , ATTR_COLS_VALS                 },  
	{  "colspan"            , ATTR_CLOSPAN_VALS              },  
	{  "coords"             , ATTR_COORDS_VALS               },  
	{  "data"               , ATTR_DATA_VALS                 },  
	{  "datetime"           , ATTR_DATETIME_VALS             },  
	{  "default"            , ATTR_DEFAULT_VALS              },  
	{  "defer"              , ATTR_DEFER_VALS                },  
	{  "direction"          , ATTR_DIRECTION_VALS            },  
	{  "disabled"           , ATTR_DISABLED_VALS             },  
	{  "download"           , ATTR_DOWNLOAD_VALS             },  
	{  "enctype"            , ATTR_ENCTYPE_VALS              },  
	{  "face"               , ATTR_FACE_VALS                 },  
	{  "frame"              , ATTR_FRAME_VALS                },  
	{  "frameborder"        , ATTR_FRAMEBORDER_VALS          },  
	{  "framespacing"       , ATTR_FRAMESPACING_VALS         },  
	{  "for"                , ATTR_FOR_VALS                  },  
	{  "form"               , ATTR_FORM_VALS                 },  
	{  "formaction"         , ATTR_FORMACTION_VALS           },  
	{  "formenctype"        , ATTR_FORMENCTYPE_VALS          },  
	{  "formmethod"         , ATTR_FORMMETHOD_VALS           },  
	{  "formnovalidate"     , ATTR_FORMOVALIDATE_VALS        },  
	{  "formtarget"         , ATTR_FORMTARGET_VALS           },  
	{  "gutter"             , ATTR_GUTTER_VALS               },  
	{  "headers"            , ATTR_HEADERS_VALS              },  
	{  "height"             , ATTR_HEIGHT_VALS               },  
	{  "href"               , ATTR_HREF_VALS                 },  
	{  "hreflang"           , ATTR_HREFLANG_VALS             },  
	{  "hspace"             , ATTR_HSPACE_VALS               },  
	{  "http-equiv"         , ATTR_HTTPEQUIV_VALS            },  
	{  "icon"               , ATTR_ICON_VALS                 },  
	{  "ismap"              , ATTR_ISMAP_VALS                },  
	{  "keytype"            , ATTR_KEYTYPE_VALS              },  
	{  "kind"               , ATTR_KIND_VALS                 },  
	{  "label"              , ATTR_LABEL_VALS                },  
	{  "language"           , ATTR_LANGUAGE_VALS             },  
	{  "leftmargin"         , ATTR_LEFTMARGIN_VALS           },  
	{  "link"               , ATTR_LINK_VALS                 },  
	{  "list"               , ATTR_LIST_VALS                 },  
	{  "longdesc"           , ATTR_LONGDESC_VALS             },  
	{  "loop"               , ATTR_LOOP_VALS                 },  
	{  "low"                , ATTR_LOW_VALS                  },  
	{  "lowsrc"             , ATTR_LOWSRC_VALS               },  
	{  "manifest"           , ATTR_MANIFEST_VALS             },  
	{  "marginheight"       , ATTR_MARGINHEIGHT_VALS         },  
	{  "marginwidth"        , ATTR_MARGINWIDTH_VALS          },  
	{  "max"                , ATTR_MAX_VALS                  },  
	{  "maxlength"          , ATTR_MAXLEGHT_VALS             },  
	{  "media"              , ATTR_MEDIA_VALS                },  
	{  "method"             , ATTR_METHOD_VALS               },  
	{  "min"                , ATTR_MIN_VALS                  },  
	{  "multiple"           , ATTR_MULTIPLE_VALS             },  
	{  "muted"              , ATTR_MUTED_VALS                },  
	{  "name"               , ATTR_NAME_VALS                 },  
	{  "nohref"             , ATTR_NOHREF_VALS               },  
	{  "noresize"           , ATTR_NORESIZE_VALS             },  
	{  "noshade"            , ATTR_NOSHADE_VALS              },  
	{  "novalidate"         , ATTR_NOVALIDATE_VALS           },  
	{  "nowrap"             , ATTR_NOWRAP_VALS               },  
	{  "open"               , ATTR_OPEN_VALS                 },  
	{  "optimum"            , ATTR_OPTIMUM_VALS              },  
	{  "pattern"            , ATTR_PATTERN_VALS              },  
	{  "placeholder"        , ATTR_PLACEHOLDER_VALS          },  
	{  "pluginspage"        , ATTR_PLUGINSPAGE_VALS          },  
	{  "poster"             , ATTR_POSTER_VALS               },  
	{  "preload"            , ATTR_PRELOAD_VALS              },  
	{  "prompt"             , ATTR_PROMPT_VALS               },  
	{  "pubdate"            , ATTR_PUBDATE_VALS              },  
	{  "radiogroup"         , ATTR_RADIOGROUP_VALS           },  
	{  "readonly"           , ATTR_READONLY_VALS             },  
	{  "rel"                , ATTR_REL_VALS                  },  
	{  "required"           , ATTR_REQUIRED_VALS             },  
	{  "reserved"           , ATTR_RESERVED_VALS             },  
	{  "rightmargin"        , ATTR_RIGHTMARGIN_VALS          },  
	{  "rows"               , ATTR_ROWS_VALS                 },  
	{  "rowspan"            , ATTR_ROWSPAN_VALS              },  
	{  "rules"              , ATTR_RULES_VALS                },  
	{  "sandbox"            , ATTR_SANDBOX_VALS              },  
	{  "scope"              , ATTR_SCOPE_VALS                },  
	{  "scroll"             , ATTR_SCROLL_VALS               },  
	{  "scrollamount"       , ATTR_SCROLLAMOUNT_VALS         },  
	{  "scrolldelay"        , ATTR_SCROLLDELAY_VALS          },  
	{  "scrolling"          , ATTR_SCROLLING_VALS            },  
	{  "shape"              , ATTR_SHAPE_VALS                },  
	{  "seamless"           , ATTR_SEAMLESS_VALS             },  
	{  "selected"           , ATTR_SELECTED_VALS             },  
	{  "size"               , ATTR_SIZE_VALS                 },  
	{  "sizes"              , ATTR_SIZES_VALS                },  
	{  "span"               , ATTR_SPAN_VALS                 },  
	{  "src"                , ATTR_SRC_VALS                  },  
	{  "srclang"            , ATTR_SRCLANG_VALS              },  
	{  "srcdoc"             , ATTR_SRCDOC_VALS               },  
	{  "start"              , ATTR_START_VALS                },  
	{  "step"               , ATTR_STEP_VALS                 },  
	{  "summary"            , ATTR_SUMMARY_VALS              },  
	{  "target"             , ATTR_TARGET_VALS               },  
	{  "text"               , ATTR_TEXT_VALS                 },  
	{  "topmargin"          , ATTR_TOPMARGIN_VALS            },  
	{  "truespeed"          , ATTR_TRUESPEED_VALS            },  
	{  "type"               , ATTR_TYPE_VALS                 },  
	{  "usemap"             , ATTR_USEMAP_VALS               },  
	{  "valign"             , ATTR_VALIGN_VALS               },  
	{  "value"              , ATTR_VALUE_VALS                },  
	{  "valuetype"          , ATTR_VALUETYPE_VALS            },  
	{  "vlink"              , ATTR_VLINK_VALS                },  
	{  "volume"             , ATTR_VOLUME_VALS               },  
	{  "vspace"             , ATTR_VSPACE_VALS               },  
	{  "width"              , ATTR_WIDTH_VALS                },  
	{  "wrap"               , ATTR_WRAP_VALS                 },  
	{  "xmlns"              , ATTR_XMLNS_VALS                },  
    {  "aria-label"         , ATTR_ARIA_LABEL_VALS           },  
    {  "aria-haspopup"      , ATTR_ARIA_HASPOPUP_VALS        },  
    {  "onmouseleave"       , ATTR_ONMOUSELEAVE_VALS         },  
    {  "ontouchstart"       , ATTR_ONTOUCHSTART_VALS         }   
};

#define ATTR_UNIVERSAL               {"accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang"}
#define ATTR_EVENTS                  {"onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define ATTR_UNIVERSAL_AND_EVENTS    {"accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_A_ATTRS                  {"accesskey", "coords", "download", "href", "hreflang", "name", "rel", "shape", "tabindex", "target", "title", "type", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload", "aria-label", "aria-haspopup", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_ABBR_ATTRS               {"title", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_ACRONYM_ATTRS            ATTR_UNIVERSAL_AND_EVENTS
#define TAG_ADDRESS_ATTRS	         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_APPLET_ATTRS    	     {"align", "alt", "archive", "code", "codebase", "height", "hspace", "vspace", "width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_AREA_ATTRS   		     {"accesskey", "alt", "coords", "href", "hreflang", "nohref", "shape", "tabindex", "target", "type", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define	TAG_ARTICLE_ATTRS            {}
#define TAG_ASIDE_ATTRS		         ATTR_UNIVERSAL
#define TAG_AUDIO_ATTRS		         {"autoplay", "controls", "loop","muted", "preload", "src"}
#define TAG_B_ATTRS			         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_BASE_ATTRS		         {"href", "target"}
#define TAG_BASEFONT_ATTRS	         {"color", "face", "size"}
#define TAG_BDI_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_BDO_ATTRS		         {"dir"}
#define	TAG_BGSOUND_ATTRS	         {"balance", "loop", "src", "volume"}
#define TAG_BIG_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_BLINK_ATTRS              {}
#define TAG_BLOCKQUOTE_ATTRS 	     {"cite", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_BODY_ATTRS   		     {"alink", "background", "bgcolor", "bgcolor", "bgproperties", "bottommargin", "leftmargin", "link", "rightmargin", "scroll", "text", "topmargin", "vlink", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_BR_ATTRS		         {"clear"}
#define TAG_BUTTON_ATTRS    	     {"accesskey", "autofocus", "disabled", "from", "formaction", "formenctype", "formmethod", "formnovalidate", "formtarget", "name", "type", "value", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload", "aria-label","accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"  }
#define TAG_CANVAS_ATTRS    	     {"height", "width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_CAPTION_ATTRS   	     {"align", "valign", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_CENTER_ATTRS             {}
#define TAG_CITE_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_CODE_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_COL_ATTRS		         {"align", "char", "charoff", "span", "valign", "width"}
#define TAG_COLGROUP_ATTRS	         {"align", "char", "charoff", "span", "valign", "width"}
#define TAG_COMMAND_ATTRS	         {"checked", "disabled", "icon", "label", "radiogroup", "type"}
#define TAG_COMMENT_ATTRS            {}
#define TAG_DATALIST_ATTRS	         {"id"}
#define TAG_DD_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_DEL_ATTRS   		     {"cite", "datetime", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_DETAILS_ATTRS	         {"open"}
#define TAG_DFN_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_DIR_ATTRS                {}
#define TAG_DIV_ATTRS   		     {"align", "title", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload", "onmouseleave", "ontouchstart", "aria-label" }
#define TAG_DL_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_DT_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_EM_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_EMBED_ATTRS		         {"align", "height", "hidden", "hspace", "pluginspage", "src", "type", "vspace", "width"}
#define TAG_FIELDSET_ATTRS   	     {"disabled", "form", "title", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_FIGCAPTION_ATTRS         {}
#define TAG_FIGURE_ATTRS             {}
#define TAG_FONT_ATTRS	       	     {"color", "face", "size"}
#define TAG_FOOTER_ATTRS             {}
#define TAG_FORM_ATTRS   		     {"accept-charset", "action", "autocomplete", "enctype", "method", "name", "novalidate", "target", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_FRAME_ATTRS		         {"bordercolor", "frameborder", "name", "noresize", "scrolling", "src"}
#define TAG_FRAMESET_ATTRS	         {"border", "bordercolor", "cols", "frameborder", "framespacing", "rows"}
#define TAG_H1_ATTRS    		     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_H2_ATTRS    		     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_H3_ATTRS     		     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_H4_ATTRS        	     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_H5_ATTRS     		     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_H6_ATTRS    		     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_HEAD_ATTRS   		     {"profile"}
#define TAG_HEADER_ATTRS             {}
#define TAG_HGROUP_ATTRS             {}
#define TAG_HR_ATTRS    		     {"align", "color", "noshade", "size", "width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_HTML_ATTRS   		     {"manifest", "title", "xmlns",  "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang" }
#define TAG_I_ATTRS			         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_IFRAME_ATTRS    	     {"align","allowtransparency","frameborder","height","hspace","marginheight","marginwidth","name","sandbox","scrolling","seamless","src","srcdoc","vspace","width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_IMG_ATTRS   		     {"align","alt","border","height","hspace","ismap","longdesc","lowsrc","src","usemap","vspace","width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_INPUT_ATTRS  		     {"accept","accesskey","align","alt","autocomplete","autofocus","border","checked","disabled","form","formaction","formenctype","formmethod","formnovalidate","formtarget","list","max","maxlength","min","multiple","name","pattern","placeholder","readonly","required","size","src","step","tabindex","type","value", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_INS_ATTRS    		     {"cite", "datetime", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_ISINDEX_ATTRS	         {"action", "prompt"}
#define TAG_KBD_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS
#define TAG_KEYGEN_ATTRS	         {"autofocus", "challenge", "disabled", "form", "keytype", "name"}
#define TAG_LABEL_ATTRS		         {"accesskey", "for"}
#define TAG_LEGEND_ATTRS    	     {"accesskey", "align", "title"}
#define TAG_LI_ATTRS    		     {"type", "value", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload"}
#define TAG_LINK_ATTRS   		     {"charset","href","media","rel","sizes","type", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang" }
#define TAG_LISTING_ATTRS            {}
#define TAG_MAIN_ATTRS			     ATTR_UNIVERSAL
#define TAG_MAP_ATTRS			     {"name"}
#define TAG_MARK_ATTRS		         {}	
#define TAG_MARQUEE_ATTRS		     {"behavior","bgcolor","direction","height","hspace","loop","scrollamount","scrolldelay","truespeed","vspace","width"}
#define TAG_MENU_ATTRS			     {"label", "type"}
#define TAG_META_ATTRS			     {"charset","content","http-equiv","name"}
#define TAG_METER_ATTRS			     {"high","low","max","min","optimum","value"}
#define TAG_MULTICOL_ATTRS		     {"cols", "gutter", "width"}
#define TAG_NAV_ATTRS			     {}
#define TAG_NOBR_ATTRS               {}
#define TAG_NOEMBED_ATTRS            {}
#define TAG_NOFRAMES_ATTRS           {}
#define TAG_OBJECT_ATTRS		     {"align","archive","classid","code","codebase","codetype","data","height","hspace","tabindex","type","vspace","width"}
#define TAG_OL_ATTRS    		     {"reserved","start", "type", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_OPTGROUP_ATTRS		     {"disabled", "label", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_OPTION_ATTRS    	     {"disabled","label","selected","value", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_OUTPUT_ATTRS		     {"for", "form", "name"}
#define TAG_P_ATTRS				     {"align", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_PARAM_ATTRS			     {"name","type","value","valuetype"}
#define TAG_PLAINTEXT_ATTRS          {}
#define TAG_PRE_ATTRS	    	     ATTR_UNIVERSAL_AND_EVENTS 	
#define TAG_PROGRESS_ATTRS		     {"value", "max"}
#define TAG_Q_ATTRS				     {"cite", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_RP_ATTRS                 {}
#define TAG_RT_ATTRS                 {}
#define TAG_RUBY_ATTRS               {}
#define TAG_S_ATTRS                  {} 
#define TAG_SAMP_ATTRS	             ATTR_UNIVERSAL_AND_EVENTS 	
#define TAG_SCRIPT_ATTRS		     {"async","defer","language","src","type"}
#define TAG_SECTION_ATTRS	         ATTR_UNIVERSAL_AND_EVENTS 	
#define TAG_SELECT_ATTRS		     {"accesskey","autofocus","disabled","form","multiple","name","required","size","tabindex", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_SMALL_ATTRS			     ATTR_UNIVERSAL_AND_EVENTS 
#define	TAG_SOURCE_ATTRS		     {"media", "src", "type"}
#define TAG_SPACER_ATTRS		     {"align", "height", "size", "type", "width"}
#define TAG_SPAN_ATTRS			     ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_STRIKE_ATTRS		     {}
#define TAG_STRONG_ATTRS		     ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_STYLE_ATTRS			     {"media", "type"}
#define TAG_SUB_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 		
#define TAG_SUMMARY_ATTRS		     {}
#define TAG_SUP_ATTRS	    	     ATTR_UNIVERSAL_AND_EVENTS 		
#define TAG_TABLE_ATTRS			     {"align","background","bgcolor","border","bordercolor","cellpadding","cellspacing","cols","frame","height","rules","summary","width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_TBODY_ATTRS  		     {"align","bgcolor","char","charoff","valign", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_TD_ATTRS     		     {"abbr","align","axis","background","bgcolor","bordercolor","char","charoff","colspan","headers","height","nowrap","rowspan","scope","valign","width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_TEXTAREA_ATTRS  	     {"accesskey","autofocus","cols","disabled","form","maxlength","name","placeholder","readonly","required","rows","tabindex","wrap", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }	
#define TAG_TFOOT_ATTRS 		     {"align","bgcolor","char","charoff","valign", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_TH_ATTRS     		     {"abbr","align","axis","background","bgcolor","bordercolor","char","charoff","colspan","headers","height","nowrap","rowspan","scope","valign","width", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_THREAD_ATTRS    	     {"align","bgcolor","char","charoff","valign", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_TIME_ATTRS			     {"datetime", "pubdate"}
#define TAG_TITLE_ATTRS              {}
#define TAG_TR_ATTRS     		     {"align","bgcolor","bordercolor","char","charoff","valign", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_TRACK_ATTRS			     {"kind", "src", "srclang", "label", "default"}
#define TAG_TT_ATTRS                 {}
#define TAG_U_ATTRS		             {}
#define TAG_UL_ATTRS     	         {"type", "accesskey", "class", "contenteditable", "contextmenu","dir", "hidden", "id", "lang", "spellcheck", "style", "tabindex", "title", "xml:lang", "onblur", "onchange", "onclick", "ondblclick", "onfocus", "onkeydown", "onkeypress", "onkeyup", "onload", "onmousedown", "onmousemove", "onmouseout", "onmouseover", "onmouseup", "onreset","onselect", "onsubmit", "onunload" }
#define TAG_VAR_ATTRS		         ATTR_UNIVERSAL_AND_EVENTS 
#define TAG_VIDEO_ATTRS		         {"autoplay","controls","height","loop","poster","preload","src","width"}
#define TAG_WBR_ATTRS                {}
#define TAG_XMP_ATTRS                {}

static map<string, vector<string>> TAG_DB =
{
	{  "a"                  , TAG_A_ATTRS             },
	{  "abbr"               , TAG_ABBR_ATTRS          },
	{  "acronym"            , TAG_ACRONYM_ATTRS       },
	{  "address"            , TAG_ADDRESS_ATTRS       },
	{  "applet"             , TAG_APPLET_ATTRS        },
	{  "area"               , TAG_AREA_ATTRS          },
	{  "article"            , TAG_ARTICLE_ATTRS       },
	{  "aside"              , TAG_ASIDE_ATTRS         },
	{  "audio"              , TAG_AUDIO_ATTRS         },
	{  "b"                  , TAG_B_ATTRS             },
	{  "base"               , TAG_BASE_ATTRS          },
	{  "basefont"           , TAG_BASEFONT_ATTRS      },
	{  "bdi"                , TAG_BDI_ATTRS           },
	{  "bdo"                , TAG_BDO_ATTRS           },
	{  "bgsound"            , TAG_BGSOUND_ATTRS       },
	{  "big"                , TAG_BIG_ATTRS           },
	{  "blink"              , TAG_BLINK_ATTRS         },
	{  "blockquote"         , TAG_BLOCKQUOTE_ATTRS    },
	{  "body"               , TAG_BODY_ATTRS          },
	{  "br"                 , TAG_BR_ATTRS            },
	{  "button"             , TAG_BUTTON_ATTRS        },
	{  "canvas"             , TAG_CANVAS_ATTRS        },
	{  "caption"            , TAG_CAPTION_ATTRS       },
	{  "center"             , TAG_CENTER_ATTRS        },
	{  "cite"               , TAG_CITE_ATTRS          },
	{  "code"               , TAG_CODE_ATTRS          },
	{  "col"                , TAG_COL_ATTRS           },
	{  "colgroup"           , TAG_COLGROUP_ATTRS      },
	{  "command"            , TAG_COMMAND_ATTRS       },
	{  "comment"            , TAG_COMMENT_ATTRS       },
	{  "datalist"           , TAG_DATALIST_ATTRS      },
	{  "dd"                 , TAG_DD_ATTRS            },
	{  "del"                , TAG_DEL_ATTRS           },
	{  "details"            , TAG_DETAILS_ATTRS       },
	{  "dfn"                , TAG_DFN_ATTRS           },
	{  "dir"                , TAG_DIR_ATTRS           },
	{  "div"                , TAG_DIV_ATTRS           },
	{  "dl"                 , TAG_DL_ATTRS            },
	{  "dt"                 , TAG_DT_ATTRS            },
	{  "em"                 , TAG_EM_ATTRS            },
	{  "embed"              , TAG_EMBED_ATTRS         },
	{  "fieldset"           , TAG_FIELDSET_ATTRS      },
	{  "figcaption"         , TAG_FIGCAPTION_ATTRS    },
	{  "figure"             , TAG_FIGURE_ATTRS        },
	{  "font"               , TAG_FONT_ATTRS          },
	{  "footer"             , TAG_FOOTER_ATTRS        },
	{  "form"               , TAG_FORM_ATTRS          },
	{  "frame"              , TAG_FRAME_ATTRS         },
	{  "frameset"           , TAG_FRAMESET_ATTRS      },
	{  "h1"                 , TAG_H1_ATTRS            },
	{  "h2"                 , TAG_H2_ATTRS            },
	{  "h3"                 , TAG_H3_ATTRS            },
	{  "h4"                 , TAG_H4_ATTRS            },
	{  "h5"                 , TAG_H5_ATTRS            },
	{  "h6"                 , TAG_H6_ATTRS            },
	{  "head"               , TAG_HEAD_ATTRS          },
	{  "header"             , TAG_HEADER_ATTRS        },
	{  "hgroup"             , TAG_HGROUP_ATTRS        },
	{  "hr"                 , TAG_HR_ATTRS            },
	{  "html"               , TAG_HTML_ATTRS          },
	{  "i"                  , TAG_I_ATTRS             },
	{  "iframe"             , TAG_IFRAME_ATTRS        },
	{  "img"                , TAG_IMG_ATTRS           },
	{  "input"              , TAG_INPUT_ATTRS         },
	{  "ins"                , TAG_INS_ATTRS           },
	{  "isindex"            , TAG_ISINDEX_ATTRS       },
	{  "kbd"                , TAG_KBD_ATTRS           },
	{  "keygen"             , TAG_KEYGEN_ATTRS        },
	{  "label"              , TAG_LABEL_ATTRS         },
	{  "legend"             , TAG_LEGEND_ATTRS        },
	{  "li"                 , TAG_LI_ATTRS            },
	{  "link"               , TAG_LINK_ATTRS          },
	{  "listing"            , TAG_LISTING_ATTRS       },
	{  "main"               , TAG_MAIN_ATTRS          },
	{  "map"                , TAG_MAP_ATTRS           },
	{  "mark"               , TAG_MARK_ATTRS          },
	{  "marquee"            , TAG_MARQUEE_ATTRS       },
	{  "menu"               , TAG_MENU_ATTRS          },
	{  "meta"               , TAG_META_ATTRS          },
	{  "meter"              , TAG_METER_ATTRS         },
	{  "multicol"           , TAG_MULTICOL_ATTRS      },
	{  "nav"                , TAG_NAV_ATTRS           },
	{  "nobr"               , TAG_NOBR_ATTRS          },
	{  "noembed"            , TAG_NOEMBED_ATTRS       },
	{  "noframes"           , TAG_NOFRAMES_ATTRS      },
	{  "noscript"           , TAG_NOFRAMES_ATTRS      },
	{  "object"             , TAG_OBJECT_ATTRS        },
	{  "ol"                 , TAG_OL_ATTRS            },
	{  "optgroup"           , TAG_OPTGROUP_ATTRS      },
	{  "option"             , TAG_OPTION_ATTRS        },
	{  "output"             , TAG_OUTPUT_ATTRS        },
	{  "p"                  , TAG_P_ATTRS             },
	{  "param"              , TAG_PARAM_ATTRS         },
	{  "plaintext"          , TAG_PLAINTEXT_ATTRS     },
	{  "pre"                , TAG_PRE_ATTRS           },
	{  "progress"           , TAG_PROGRESS_ATTRS      },
	{  "q"                  , TAG_P_ATTRS             },
	{  "rp"                 , TAG_RP_ATTRS            },
	{  "rt"                 , TAG_RT_ATTRS            },
	{  "ruby"               , TAG_RUBY_ATTRS          },
	{  "s"                  , TAG_S_ATTRS             },
	{  "samp"               , TAG_SAMP_ATTRS          },
	{  "script"             , TAG_SCRIPT_ATTRS        },
	{  "section"            , TAG_SECTION_ATTRS       },
	{  "select"             , TAG_SELECT_ATTRS        },
	{  "small"              , TAG_SMALL_ATTRS         },
	{  "source"             , TAG_SOURCE_ATTRS        },
	{  "spacer"             , TAG_SPACER_ATTRS        },
	{  "span"               , TAG_SPAN_ATTRS          },
	{  "strike"             , TAG_STRIKE_ATTRS        },
	{  "strong"             , TAG_STRONG_ATTRS        },
	{  "style"              , TAG_STYLE_ATTRS         },
	{  "sub"                , TAG_SUB_ATTRS           },
	{  "summary"            , TAG_SUMMARY_ATTRS       },
	{  "sup"                , TAG_SUP_ATTRS           },
	{  "table"              , TAG_TABLE_ATTRS         },
	{  "tbody"              , TAG_TBODY_ATTRS         },
	{  "td"                 , TAG_TD_ATTRS            },
	{  "textarea"           , TAG_TEXTAREA_ATTRS      },
	{  "tfoot"              , TAG_TFOOT_ATTRS         },
	{  "th"                 , TAG_TH_ATTRS            },
	{  "thead"              , TAG_THREAD_ATTRS        },
	{  "time"               , TAG_TIME_ATTRS          },
	{  "title"              , TAG_TITLE_ATTRS         },
	{  "tr"                 , TAG_TR_ATTRS            },
	{  "track"              , TAG_TRACK_ATTRS         },
	{  "tt"                 , TAG_TT_ATTRS            },
	{  "u"                  , TAG_U_ATTRS             },
	{  "ul"                 , TAG_UL_ATTRS            },
	{  "var"                , TAG_VAR_ATTRS           },
	{  "video"              , TAG_VIDEO_ATTRS         },
	{  "wbr"                , TAG_WBR_ATTRS           },
	{  "xmp"                , TAG_XMP_ATTRS           }
};