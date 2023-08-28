TC_01_lanuch()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/remote-settings.content-signature.mozilla.org-2023-09-19-11-14-05.chain", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("recommendations", 
		"URL=https://firefox-api-proxy.cdn.mozilla.net/desktop/v1/recommendations?locale=en-US&region=IN&count=30", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("InsuranceWebExtJS", 
		"URL=https://demo.borland.com/InsuranceWebExtJS/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=css/style.css", ENDITEM, 
		"Url=javascript/menu.js", ENDITEM, 
		"Url=images/profile.gif", ENDITEM, 
		"Url=images/tiles.png", ENDITEM, 
		"Url=images/highlights.gif", ENDITEM, 
		"Url=images/main_services.gif", ENDITEM, 
		"Url=images/login.gif;jsessionid=93F8FCA667DA2007ABA11BFFA93CA37B", ENDITEM, 
		"Url=images/spacer.gif", ENDITEM, 
		"Url=images/submit2.gif", ENDITEM, 
		"Url=images/signup.gif;jsessionid=93F8FCA667DA2007ABA11BFFA93CA37B", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01j\\xE6w:\\xB6\\xA6\\xAF\\xC1eQ$SQ\\xDF\\x86", 
		LAST);

	web_url("tiles", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x01j\\xE6w:\\xB6\\xA6\\xAF\\xC1eQ$SQ\\xDF\\x86", 
		LAST);

	lr_think_time(14);

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04y\\xC8\\x98Q\\xA0\\xD9n\\x12Wa\n\\xFF{\\xBA^\\xD7U", 
		LAST);

	web_custom_request("r3.o.lencr.org_2", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x040J\\xC5\\x03\\xDE\r\\xD0s6\\x9E\\xF3\\x11k\\xBF7\\xF5<", 
		LAST);

	web_custom_request("r3.o.lencr.org_3", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x047\\xBB\\x9F\\xB5\\x82\\xC5\\x06>=\\x94K\\x0E\\x8E\\xFA%\\xFE\\xFB", 
		LAST);

	web_custom_request("r3.o.lencr.org_4", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xC5\\xB5l9\ry\\xB2\\xB1\\x08\\xDAEz\\xE7\\xBE\\xA3\\x0E\\xF8", 
		LAST);

	web_custom_request("r3.o.lencr.org_5", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xF8\\x1A$\\xCC+P\\x86\\xEF\\x03R\\xE3=\\x03\\x14\\xA2\\x17P", 
		LAST);

	web_custom_request("r3.o.lencr.org_6", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xF8\\x1A$\\xCC+P\\x86\\xEF\\x03R\\xE3=\\x03\\x14\\xA2\\x17P", 
		LAST);

	web_custom_request("cfr-v1-en-US", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cfr-v1-en-US_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_7", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x040J\\xC5\\x03\\xDE\r\\xD0s6\\x9E\\xF3\\x11k\\xBF7\\xF5<", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("gts1c3", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x11\\x00\\xF9[\\xAA\\x95\\x17\n\\xE9\\xC8\\x10Z\\xE4\\xB1\\xEE\\xDC\\xE5\\x9E", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06'd\\xBD\\xAC\\x97O,\nP\\xA8l\\xF3\\xF9\\x00\\xA6", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARDGqhIaAhgFtN6NrSICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABEIvwDBoCGAXqhzidIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQyeYMGgIYBWupEuIiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARCOtg0aAhgFfAn1CiICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABECEaAhgFRMpiUiICIAIoAQ==", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xC8\\x03s\\xB9\\x06C\\xF6\\x1E\\xA1`\\xE2\\xBE}\\x03\\x00", 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xC8\\x03s\\xB9\\x06C\\xF6\\x1E\\xA1`\\xE2\\xBE}\\x03\\x00", 
		LAST);

	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06'd\\xBD\\xAC\\x97O,\nP\\xA8l\\xF3\\xF9\\x00\\xA6", 
		LAST);

	web_add_cookie("_ga_MQ7767QQQW=GS1.1.1692364627.1.0.1692364635.0.0.0; DOMAIN=aus5.mozilla.org");

	web_add_cookie("_ga=GA1.2.907056927.1692364628; DOMAIN=aus5.mozilla.org");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/116.0.3/20230815173142/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%2010.0.0.0.19045.2364%20(x64)/ISET:SSE4_2,MEM:7847/default/default/update.xml?force=1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("update.xml_2", 
		"URL=https://aus5.mozilla.org/update/3/GMP/116.0.3/20230815173142/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%2010.0.0.0.19045.2364%20(x64)/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_connect("ID=1", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	web_url("update.xml_3", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/116.0.3/20230815173142/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%2010.0.0.0.19045.2364%20(x64)/ISET:SSE4_2,MEM:7847/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_8", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\xC5\\xB5l9\ry\\xB2\\xB1\\x08\\xDAEz\\xE7\\xBE\\xA3\\x0E\\xF8", 
		LAST);

	web_custom_request("1ed98f20-316c-4755-82d7-9eb88d11e79f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/1ed98f20-316c-4755-82d7-9eb88d11e79f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":58,\"start_time\":\"2023-08-25T14:24+05:30\",\"end_time\":\"2023-08-28T12:09+05:30\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"windows_build_number\":19045,\"first_run_date\":\"2022-12-02+05:30\",\"os\":\"Windows\",\"app_build\":\"20230815173142\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_display_version\":\"116.0.3\",\"architecture\":\"x86_64\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"events\":[{\"timestamp\""
		":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"dns_lookup_time\":\"17\",\"load_type\":\"NORMAL\",\"http_ver\":\"1\",\"response_time\":\"1793\",\"load_time\":\"6753\"}},{\"timestamp\":10461,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"LINK\",\"http_ver\":\"1\",\"response_time\":\"196\",\"load_time\":\"2473\",\"fcp_time\":\"263\",\"same_origin_nav\":\"true\"}},{\"timestamp\":14955,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"js_exec_time\":\"0\","
		"\"load_type\":\"LINK\",\"http_ver\":\"1\",\"load_time\":\"222\",\"response_time\":\"196\",\"fcp_time\":\"218\",\"same_origin_nav\":\"true\"}},{\"timestamp\":29900,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"http_ver\":\"1\",\"fcp_time\":\"486\",\"response_time\":\"460\",\"same_origin_nav\":\"true\",\"load_time\":\"774\",\"load_type\":\"LINK\",\"redirect_time\":\"252\",\"redirect_count\":\"1\"}},{\"timestamp\":36499,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\""
		"response_time\":\"196\",\"http_ver\":\"1\",\"load_time\":\"217\",\"same_origin_nav\":\"true\",\"load_type\":\"LINK\",\"fcp_time\":\"215\"}},{\"timestamp\":41599,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"fcp_time\":\"318\",\"response_time\":\"296\",\"http_ver\":\"1\",\"load_time\":\"320\",\"load_type\":\"LINK\",\"same_origin_nav\":\"true\"}},{\"timestamp\":49657,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"same_origin_nav\":\"true\",\"load_type\":\"LINK\",\"fcp_time\":"
		"\"247\",\"http_ver\":\"1\",\"response_time\":\"229\",\"load_time\":\"737\"}},{\"timestamp\":56653,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"LINK\",\"same_origin_nav\":\"true\",\"load_time\":\"329\",\"http_ver\":\"1\",\"fcp_time\":\"321\",\"response_time\":\"297\"}},{\"timestamp\":83845,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"same_origin_nav\":\"true\",\"load_time\":\"238\",\"http_ver\":\"1\",\"load_type\":\"LINK\",\"response_time\":\"210\"}},{\""
		"timestamp\":90511,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"same_origin_nav\":\"true\",\"load_type\":\"LINK\",\"response_time\":\"232\",\"load_time\":\"269\",\"http_ver\":\"1\"}},{\"timestamp\":98414,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"LINK\",\"load_time\":\"230\",\"same_origin_nav\":\"true\",\"response_time\":\"202\",\"http_ver\":\"1\",\"fcp_time\":\"228\"}},{\"timestamp\":103761,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\""
		"same_origin_nav\":\"true\",\"http_ver\":\"1\",\"load_time\":\"237\",\"response_time\":\"207\",\"load_type\":\"LINK\"}},{\"timestamp\":110778,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"load_type\":\"LINK\",\"response_time\":\"435\",\"redirect_time\":\"233\",\"same_origin_nav\":\"true\",\"fcp_time\":\"514\",\"http_ver\":\"1\",\"load_time\":\"530\",\"redirect_count\":\"1\"}}]}", 
		LAST);

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/header.png", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/h_back2.jpg", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		LAST);

	web_custom_request("0f4acf4d-34cf-4b95-9eec-5a6a3c9b34e3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/0f4acf4d-34cf-4b95-9eec-5a6a3c9b34e3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":281,\"start_time\":\"2023-08-25T14:24+05:30\",\"end_time\":\"2023-08-28T12:09+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-12-02+05:30\",\"app_channel\":\"release\",\"app_build\":\"20230815173142\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"app_display_version\":\"116.0.3\",\"os\":\"Windows\",\"client_id\":\""
		"ac18ee09-27b6-4d69-b120-39af32374c86\",\"windows_build_number\":19045},\"metrics\":{\"quantity\":{\"topsites.rows\":1},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"boolean\":{\"pocket.is_signed_in\":false,\"newtab.search.enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"topsites.sponsored_enabled\":true,\"pocket.enabled\":true,\"topsites.enabled\":true},\"string\":{\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\",\"newtab.homepage_category\":\"enabled\"}}}", 
		LAST);

	web_custom_request("22fcb774-cf65-451b-95e3-4c10953d9a28", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/22fcb774-cf65-451b-95e3-4c10953d9a28", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\"},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\"},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\"},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\"},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\"},\"bug-1848748-pref-page-load-time-patch-release-116-117\":{\"branch\":\"reset-to-false\"}},\""
		"locale\":\"en-US\",\"version\":\"116.0.3\",\"release_channel\":\"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20230815173142\",\"impression_id\":\"{309f36cc-6348-4bb8-9724-81715552739d}\"}", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1692975500434\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive0*/

	web_custom_request("79489dc1-855e-4585-847f-24e20193c8c2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/79489dc1-855e-4585-847f-24e20193c8c2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\"},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\"},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\"},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\"},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\"},\"bug-1848748-pref-page-load-time-patch-release-116-117\":{\"branch\":\"reset-to-false\"}},\""
		"locale\":\"en-US\",\"version\":\"116.0.3\",\"release_channel\":\"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20230815173142\",\"impression_id\":\"{309f36cc-6348-4bb8-9724-81715552739d}\"}", 
		EXTRARES, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/pimp1.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/ltc.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/lbc.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/rtc.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		LAST);

	web_custom_request("7767107c-4f29-46e9-aad1-33238a3db068", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/7767107c-4f29-46e9-aad1-33238a3db068", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":149,\"start_time\":\"2023-08-25T20:53+05:30\",\"end_time\":\"2023-08-28T12:09+05:30\",\"reason\":\"active\",\"experiments\":{\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\",\"type\":\"nimbus-rollout\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\"}},\""
		"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\",\"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\",\"type\":\"nimbus-rollout\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\""
		"4331d05f-bced-426c-98ba-bc7b8d870645\",\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_display_version\":\"116.0.3\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_build\":\"20230815173142\",\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\",\"first_run_date\":\"2022-12-02+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045},\"metrics\":{\"datetime\":{\""
		"glean.validation.first_run_hour\":\"2022-12-02T12+05:30\"},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1,\"metrics\":1,\"newtab\":1,\"pageload\":1},\"glean.error.invalid_state\":{\"glean.baseline.duration\":1}},\"counter\":{\"browser.engagement.active_ticks\":1},\"uuid\":{\"legacy.telemetry.client_id\":\"eae14f16-8932-4a97-8ada-7cd07ba522fd\"}}}", 
		LAST);

	web_custom_request("r3.o.lencr.org_9", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\x11\\x16D\\xD2ER\\x8DF!j\\xBB\\xB9b=\\x1F\\x1C^", 
		LAST);

	web_url("changeset", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/monitor/collections/changes/changeset?_expected=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/rbc.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/pimp2.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/pimp3.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/ltc1.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		LAST);

	web_url("v1_2", 
		"URL=https://normandy.cdn.mozilla.net/api/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/aus.content-signature.mozilla.org-2023-10-09-11-30-15.chain", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("769f0993-6222-486c-ad7f-117a6298b03f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/769f0993-6222-486c-ad7f-117a6298b03f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":69,\"start_time\":\"2023-08-25T14:24+05:30\",\"end_time\":\"2023-08-28T12:09+05:30\",\"reason\":\"startup\",\"experiments\":{\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\",\"type\":\"nimbus-rollout\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"4331d05f-bced-426c-98ba-bc7b8d870645"
		"\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\",\"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\",\"type\":\"nimbus-rollout\"}},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\""
		"eb23cd2e-978a-4755-a72b-d39611a48817\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\",\"windows_build_number\":19045,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-12-02+05:30\",\"app_channel\":\"release\",\"app_build\":\"20230815173142\",\"app_display_version\":\"116.0.3\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.client_id\":\""
		"eae14f16-8932-4a97-8ada-7cd07ba522fd\"},\"boolean\":{\"urlbar.pref_suggest_topsites\":true},\"quantity\":{\"urlbar.pref_max_results\":10}},\"events\":[{\"timestamp\":0,\"category\":\"fog.validation\",\"name\":\"validate_early_event\"},{\"timestamp\":1793,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"experiment\":\"next-generation-accessibility-engine-powering-screen-readers\",\"feature\":\"accessibilityCache\"}},{\"timestamp\":1793,\""
		"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"experiment\":\"next-generation-accessibility-engine-powering-screen-readers-and-other-ats-copy\",\"feature\":\"accessibilityCache\"}},{\"timestamp\":16327625,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"reason\":\"invalid-feature\",\"experiment\":\"next-generation-accessibility-engine-powering-screen-readers\",\"feature\":\"accessibilityCache\"}},{\"timestamp\""
		":16327627,\"category\":\"nimbus_events\",\"name\":\"validation_failed\",\"extra\":{\"experiment\":\"next-generation-accessibility-engine-powering-screen-readers-and-other-ats-copy\",\"feature\":\"accessibilityCache\",\"reason\":\"invalid-feature\"}}]}", 
		LAST);

	web_custom_request("changeset_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/normandy-recipes-capabilities/changeset?_expected=1693180864205&_since=%221692921664417%22", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x03\\x8E\\xE5\\x83\\x06\\xA9\\xEB\\x1C\\x80\\x10c\n\\xAD\\xED8\"", 
		EXTRARES, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/lbc1.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/rtc1.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		LAST);

	web_custom_request("gts1c3_2", 
		"URL=http://ocsp.pki.goog/gts1c3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0R0P0N0L0J0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\xC7.y\\x8A\\xDD\\xFFa4\\xB3\\xBA\\xEDGB\\xB8\\xBB\\xC6\\xC0$\\x07c\\x04\\x14\\x8At\\x7F\\xAF\\x85\\xCD\\xEE\\x95\\xCD=\\x9C\\xD0\\xE2F\\x14\\xF3q5\\x1D'\\x02\\x11\\x00\\xF9[\\xAA\\x95\\x17\n\\xE9\\xC8\\x10Z\\xE4\\xB1\\xEE\\xDC\\xE5\\x9E", 
		EXTRARES, 
		"Url=https://demo.borland.com/InsuranceWebExtJS/images/rbc1.gif", "Referer=https://demo.borland.com/InsuranceWebExtJS/css/style.css", ENDITEM, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/remote-settings.content-signature.mozilla.org-2023-10-09-11-30-14.chain", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("changeset_3", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/nimbus-desktop-experiments/changeset?_expected=1692986564650&_since=%221692975394936%22", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("4bf39f48-ca23-44fa-a100-909ba0201962", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/metrics/1/4bf39f48-ca23-44fa-a100-909ba0201962", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":32,\"start_time\":\"2023-08-25T12:32+05:30\",\"end_time\":\"2023-08-28T12:09+05:30\",\"reason\":\"overdue\",\"experiments\":{\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\",\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\",\"enrollmentId\":\""
		"4634dde7-98c7-40ea-949f-3c908ee20795\"}},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\",\"type\":\"nimbus-rollout\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"4331d05f-bced-426c-98ba-bc7b8d870645\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\",\""
		"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"app_build\":\"20230815173142\",\"app_display_version\":\"116.0.3\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-12-02+05:30\",\"windows_build_number\":19045,\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\"},\"metrics\":{\"datetime\":{\""
		"background_update.time_last_update_scheduled\":\"2023-08-25+05:30\",\"glean.validation.first_run_hour\":\"2022-12-02T12+05:30\"},\"uuid\":{\"legacy.telemetry.client_id\":\"eae14f16-8932-4a97-8ada-7cd07ba522fd\"},\"string\":{\"search.engine.default.load_path\":\"[addon]google@search.mozilla.org\",\"search.engine.private.verified\":\"\",\"search.engine.private.load_path\":\"\",\"search.engine.private.engine_id\":\"\",\"search.engine.default.display_name\":\"Google\",\""
		"search.engine.default.engine_id\":\"google-b-d\",\"search.engine.private.display_name\":\"\",\"search.engine.default.verified\":\"default\"},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-d&q=\"},\"counter\":{\"browser.engagement.uri_count\":34,\"power.total_cpu_time_ms\":324456,\"power.total_gpu_time_ms\":5948,\"browser.engagement.active_ticks\":110,\"power.total_thread_wakeups\":662980},\""
		"boolean\":{\"cookie.banners.service_detect_only\":false},\"timespan\":{\"fog.initialization\":{\"value\":938200,\"time_unit\":\"nanosecond\"},\"extensions.startup_cache_load_time\":{\"value\":141,\"time_unit\":\"millisecond\"}},\"timing_distribution\":{\"search.service.startup_time\":{\"values\":{\"536870912\":0,\"492312796\":1,\"413984066\":0,\"348117717\":2,\"451452825\":0,\"379625062\":0},\"sum\":1250775900},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"4573920\":0,\"2493948\":1,"
		"\"3234250\":0,\"2965820\":0,\"3526975\":0,\"3846193\":0,\"2719669\":0,\"5439339\":1,\"4194304\":0,\"4987896\":0,\"6468501\":0,\"5931641\":1},\"sum\":14494400},\"wr.renderer_time_no_sc\":{\"values\":{\"808562\":61,\"1482910\":377,\"120193\":4,\"11863283\":0,\"50535\":2,\"38967\":1,\"84989\":1,\"1143480\":216,\"623487\":17,\"2097152\":348,\"12937002\":1,\"23726566\":0,\"6468501\":0,\"42494\":0,\"21757357\":0,\"155871\":19,\"240387\":83,\"16777216\":0,\"169979\":25,\"7692387\":0,\"35733\":0,\"65536\""
		":0,\"92681\":2,\"370727\":18,\"71467\":1,\"5439339\":7,\"43514714\":1,\"101070\":1,\"55108\":1,\"202140\":48,\"25874004\":0,\"30769549\":0,\"1617125\":355,\"1048576\":148,\"14107900\":1,\"1923096\":352,\"2719669\":140,\"4573920\":7,\"571740\":20,\"1359834\":311,\"131072\":6,\"2965820\":78,\"46340\":0,\"110217\":4,\"4987896\":4,\"480774\":11,\"19951584\":0,\"220435\":68,\"8388608\":1,\"311743\":25,\"339958\":33,\"440871\":13,\"961548\":142,\"3526975\":33,\"2493948\":220,\"524288\":14,\"15384774\":0"
		",\"3846193\":22,\"142935\":10,\"32768\":1,\"36591367\":0,\"28215801\":0,\"5931641\":4,\"33554432\":0,\"10878678\":2,\"3234250\":38,\"881743\":106,\"18295683\":1,\"39903169\":0,\"679917\":27,\"285870\":70,\"1246974\":298,\"1763487\":376,\"7053950\":2,\"262144\":79,\"77935\":1,\"9975792\":0,\"4194304\":16,\"9147841\":1,\"2286960\":271,\"60096\":0,\"741455\":44,\"47453132\":0,\"185363\":36,\"404281\":16},\"sum\":7657794000},\"wr.texture_cache_update_time\":{\"values\":{\"60096\":2,\"1482910\":3,\""
		"440871\":16,\"202140\":30,\"2233\":0,\"17866\":1,\"65536\":6,\"101070\":9,\"10623\":3,\"961548\":7,\"7512\":6,\"6468501\":0,\"4096\":0,\"7053950\":1,\"1722\":0,\"1024\":0,\"35733\":6,\"370727\":17,\"42494\":5,\"11585\":2,\"8192\":0,\"6888\":7,\"92681\":6,\"4870\":6,\"30048\":1,\"5311\":0,\"881743\":5,\"679917\":9,\"1327\":0,\"1448\":0,\"2286960\":2,\"240387\":47,\"71467\":4,\"1579\":0,\"25267\":1,\"84989\":3,\"2048\":0,\"220435\":35,\"571740\":13,\"1246974\":5,\"1359834\":2,\"1217\":0,\"32768\":2,"
		"\"27554\":2,\"939\":1820,\"169979\":21,\"2493948\":0,\"4466\":0,\"339958\":22,\"16384\":1,\"13777\":1,\"1143480\":3,\"46340\":3,\"155871\":16,\"38967\":11,\"1048576\":3,\"1617125\":0,\"808562\":8,\"142935\":15,\"4194304\":1,\"131072\":9,\"1763487\":2,\"15024\":3,\"2965820\":1,\"5439339\":1,\"480774\":10,\"2719669\":2,\"3158\":0,\"2896\":292,\"623487\":12,\"2435\":0,\"8388608\":0,\"12633\":3,\"311743\":26,\"9147841\":1,\"2655\":0,\"8933\":7,\"6316\":0,\"1878\":1899,\"741455\":12,\"77935\":4,\""
		"404281\":7,\"9741\":6,\"1923096\":1,\"3444\":0,\"50535\":8,\"3526975\":1,\"2097152\":1,\"3756\":26,\"5792\":14,\"4987896\":0,\"19483\":1,\"524288\":4,\"23170\":5,\"55108\":2,\"5931641\":1,\"1116\":0,\"3846193\":1,\"3234250\":1,\"9975792\":0,\"262144\":28,\"185363\":27,\"285870\":38,\"4573920\":0,\"21247\":0,\"7692387\":0,\"120193\":9,\"110217\":4},\"sum\":250544000},\"networking.dns_renewal_time\":{\"values\":{\"1246974\":0,\"18295683\":1,\"9975792\":3,\"51748008\":11,\"696235434\":0,\"12937002\""
		":0,\"43514714\":0,\"11863283\":4,\"1763487\":2,\"4573920\":2,\"1359834\":0,\"47453132\":0,\"39903169\":0,\"206992033\":3,\"87029429\":20,\"319225354\":2,\"1617125\":0,\"5931641\":3,\"585461880\":0,\"112863206\":7,\"33554432\":0,\"638450708\":1,\"292730940\":0,\"3526975\":2,\"23726566\":0,\"123078199\":6,\"10878678\":3,\"2286960\":3,\"348117717\":0,\"19951584\":0,\"7692387\":2,\"21757357\":1,\"16777216\":0,\"1048576\":0,\"8388608\":2,\"103496016\":21,\"134217728\":8,\"15384774\":2,\"4987896\":2,\""
		"61539099\":7,\"1482910\":0,\"73182735\":5,\"1143480\":0,\"3846193\":1,\"413984066\":0,\"6468501\":3,\"536870912\":0,\"56431603\":19,\"3234250\":0,\"67108864\":7,\"451452825\":0,\"2719669\":5,\"2965820\":1,\"36591367\":0,\"2097152\":3,\"79806338\":2,\"4194304\":1,\"30769549\":0,\"28215801\":0,\"961548\":4,\"1923096\":4,\"246156398\":0,\"94906265\":29,\"9147841\":3,\"189812531\":1,\"14107900\":2,\"174058858\":1,\"379625062\":0,\"7053950\":3,\"25874004\":0,\"159612677\":9,\"5439339\":2,\"268435456\""
		":2,\"146365470\":8,\"492312796\":0,\"2493948\":5,\"225726412\":1},\"sum\":19216609346},\"networking.dns_lookup_time\":{\"values\":{\"2286960\":0,\"225726412\":0,\"61539099\":2,\"348117717\":0,\"39903169\":0,\"3526975\":0,\"292730940\":2,\"30769549\":0,\"319225354\":1,\"15384774\":0,\"7692387\":0,\"6468501\":1,\"25874004\":0,\"21757357\":0,\"51748008\":1,\"73182735\":0,\"33554432\":0,\"246156398\":1,\"1763487\":0,\"56431603\":0,\"146365470\":6,\"5439339\":1,\"1143480\":1,\"4573920\":0,\"10878678\""
		":0,\"36591367\":0,\"7053950\":0,\"14107900\":0,\"3846193\":0,\"1359834\":0,\"206992033\":0,\"189812531\":0,\"1482910\":0,\"16777216\":0,\"18295683\":0,\"4194304\":1,\"19951584\":0,\"87029429\":11,\"11863283\":1,\"1923096\":1,\"8388608\":1,\"94906265\":19,\"174058858\":0,\"103496016\":11,\"9975792\":0,\"2965820\":0,\"5931641\":0,\"2719669\":0,\"112863206\":7,\"2493948\":0,\"4987896\":0,\"67108864\":1,\"79806338\":3,\"159612677\":4,\"134217728\":4,\"1617125\":0,\"268435456\":1,\"47453132\":0,\""
		"28215801\":0,\"123078199\":3,\"43514714\":0,\"3234250\":0,\"2097152\":0,\"9147841\":2,\"12937002\":0,\"23726566\":0,\"1246974\":0},\"sum\":9505199885},\"glean.upload.send_success\":{\"values\":{\"2553802833\":1,\"4683695047\":0,\"6623745058\":0,\"638450708\":0,\"696235434\":0,\"585461880\":0,\"268435456\":2,\"1392470868\":1,\"2784941737\":0,\"827968132\":0,\"2147483648\":0,\"2341847523\":0,\"536870912\":1,\"3938502375\":0,\"1073741824\":0,\"6074000999\":1,\"5569883475\":0,\"1655936264\":0,\""
		"984625593\":0,\"1805811301\":0,\"451452825\":0,\"319225354\":4,\"379625062\":4,\"1276901416\":0,\"1518500249\":0,\"3611622602\":0,\"5107605667\":0,\"3037000499\":0,\"3311872529\":1,\"413984066\":0,\"492312796\":0,\"4294967296\":0,\"1969251187\":0,\"759250124\":0,\"348117717\":1,\"902905650\":1,\"292730940\":3,\"1170923761\":0},\"sum\":20150070400},\"wr.framebuild_time\":{\"values\":{\"404281\":195,\"2719669\":1,\"339958\":297,\"262144\":377,\"623487\":30,\"2965820\":1,\"46340\":1,\"9975792\":0,\""
		"524288\":78,\"8388608\":0,\"42494\":2,\"10878678\":1,\"1359834\":6,\"169979\":224,\"55108\":0,\"3846193\":0,\"120193\":96,\"5931641\":0,\"25267\":2,\"1048576\":6,\"741455\":16,\"679917\":32,\"7053950\":0,\"142935\":151,\"71467\":6,\"220435\":332,\"60096\":0,\"1246974\":6,\"50535\":1,\"38967\":0,\"3234250\":2,\"5439339\":0,\"440871\":150,\"1923096\":4,\"11863283\":0,\"4573920\":0,\"101070\":41,\"155871\":174,\"110217\":74,\"1617125\":5,\"881743\":12,\"6468501\":0,\"2097152\":2,\"2493948\":1,\""
		"32768\":0,\"311743\":367,\"2286960\":2,\"480774\":122,\"84989\":11,\"1763487\":2,\"9147841\":0,\"1143480\":8,\"285870\":403,\"131072\":139,\"3526975\":1,\"4987896\":0,\"7692387\":0,\"240387\":385,\"185363\":236,\"571740\":69,\"961548\":13,\"202140\":264,\"77935\":6,\"35733\":2,\"65536\":2,\"1482910\":5,\"30048\":1,\"370727\":236,\"808562\":21,\"27554\":0,\"92681\":16,\"4194304\":0},\"sum\":1445270500},\"wr.renderer_time\":{\"values\":{\"571740\":20,\"7692387\":1,\"32768\":1,\"15384774\":1,\"38967"
		"\":1,\"1048576\":148,\"142935\":10,\"3846193\":23,\"60096\":0,\"1482910\":377,\"2493948\":220,\"28215801\":1,\"19951584\":0,\"30769549\":0,\"1763487\":376,\"220435\":68,\"23726566\":0,\"21757357\":0,\"285870\":70,\"46340\":0,\"6468501\":3,\"16777216\":0,\"110217\":4,\"120193\":4,\"881743\":106,\"623487\":17,\"18295683\":2,\"92681\":2,\"185363\":36,\"262144\":79,\"1246974\":298,\"11863283\":0,\"440871\":13,\"131072\":6,\"47453132\":0,\"961548\":142,\"2965820\":78,\"2719669\":140,\"42494\":0,\""
		"7053950\":2,\"77935\":1,\"311743\":25,\"9975792\":0,\"370727\":18,\"4194304\":16,\"9147841\":2,\"14107900\":1,\"524288\":14,\"35733\":0,\"169979\":25,\"339958\":33,\"39903169\":0,\"404281\":16,\"679917\":27,\"71467\":1,\"3234250\":39,\"101070\":1,\"4573920\":7,\"8388608\":1,\"480774\":11,\"43514714\":2,\"155871\":19,\"1359834\":311,\"55108\":1,\"4987896\":5,\"84989\":1,\"36591367\":1,\"2286960\":271,\"10878678\":2,\"3526975\":35,\"65536\":0,\"240387\":83,\"1923096\":352,\"808562\":61,\"12937002\""
		":1,\"5439339\":7,\"1617125\":355,\"5931641\":5,\"33554432\":0,\"741455\":44,\"202140\":48,\"50535\":2,\"2097152\":349,\"1143480\":216,\"25874004\":0},\"sum\":7873266000},\"wr.gpu_wait_time\":{\"values\":{\"7512\":117,\"35733\":7,\"3756\":254,\"185363\":0,\"65536\":4,\"17866\":13,\"2233\":108,\"3158\":257,\"404281\":0,\"220435\":0,\"55108\":2,\"71467\":2,\"1327\":14,\"16384\":19,\"10623\":46,\"2048\":114,\"262144\":0,\"101070\":1,\"1878\":78,\"169979\":0,\"25267\":5,\"2655\":145,\"311743\":0,\""
		"370727\":0,\"1024\":1,\"50535\":6,\"60096\":1,\"8192\":77,\"110217\":0,\"6316\":258,\"12633\":23,\"4096\":399,\"19483\":8,\"8933\":65,\"131072\":0,\"5311\":315,\"32768\":1,\"11585\":31,\"6888\":209,\"27554\":4,\"4870\":471,\"46340\":3,\"202140\":0,\"84989\":1,\"1579\":54,\"9741\":47,\"21247\":6,\"2896\":213,\"480774\":1,\"1116\":3,\"4466\":414,\"1448\":17,\"339958\":0,\"285870\":0,\"240387\":0,\"5792\":417,\"15024\":14,\"77935\":3,\"30048\":3,\"142935\":0,\"524288\":0,\"440871\":0,\"2435\":105,\""
		"42494\":2,\"120193\":0,\"1722\":40,\"1217\":8,\"155871\":0,\"3444\":230,\"13777\":23,\"23170\":2,\"92681\":1,\"38967\":3},\"sum\":26581300},\"networking.dns_failed_lookup_time\":{\"values\":{\"4573920\":0,\"19951584\":0,\"14107900\":0,\"8388608\":1,\"23726566\":0,\"43514714\":1,\"67108864\":0,\"4194304\":1,\"10878678\":1,\"9975792\":0,\"9147841\":1,\"18295683\":1,\"51748008\":0,\"6468501\":0,\"21757357\":0,\"79806338\":0,\"11863283\":1,\"16777216\":0,\"5931641\":1,\"4987896\":1,\"39903169\":1,\""
		"87029429\":1,\"7692387\":2,\"28215801\":0,\"30769549\":0,\"61539099\":0,\"7053950\":0,\"94906265\":1,\"12937002\":1,\"33554432\":0,\"73182735\":0,\"47453132\":0,\"36591367\":0,\"56431603\":0,\"25874004\":0,\"5439339\":1,\"15384774\":2,\"103496016\":0},\"sum\":422404294},\"glean.validation.shutdown_wait\":{\"values\":{\"2493948\":1,\"2286960\":0,\"2097152\":0,\"2719669\":1,\"1923096\":0,\"1617125\":0,\"1482910\":1,\"1763487\":0,\"2965820\":0},\"sum\":7058600},\"networking.dns_renewal_time_for_ttl\""
		":{\"values\":{\"43514714\":0,\"11863283\":3,\"7692387\":3,\"2097152\":7,\"7053950\":3,\"451452825\":0,\"1246974\":4,\"33554432\":0,\"3526975\":3,\"5439339\":5,\"94906265\":12,\"23726566\":0,\"961548\":2,\"61539099\":7,\"103496016\":12,\"67108864\":3,\"21757357\":0,\"12937002\":2,\"206992033\":12,\"15384774\":3,\"4987896\":3,\"9975792\":2,\"16777216\":1,\"134217728\":7,\"56431603\":4,\"319225354\":2,\"292730940\":17,\"174058858\":19,\"1359834\":1,\"1048576\":2,\"159612677\":6,\"36591367\":0,\""
		"10878678\":7,\"28215801\":0,\"189812531\":31,\"2286960\":8,\"348117717\":0,\"51748008\":2,\"225726412\":7,\"79806338\":4,\"3234250\":1,\"1617125\":4,\"30769549\":0,\"87029429\":16,\"1923096\":4,\"39903169\":0,\"9147841\":1,\"6468501\":0,\"1482910\":1,\"5931641\":2,\"112863206\":11,\"1143480\":1,\"2965820\":6,\"146365470\":8,\"47453132\":0,\"3846193\":7,\"73182735\":0,\"1763487\":1,\"379625062\":1,\"8388608\":3,\"2719669\":7,\"413984066\":2,\"19951584\":1,\"4573920\":1,\"246156398\":3,\"14107900\""
		":0,\"2493948\":6,\"25874004\":0,\"4194304\":2,\"268435456\":11,\"18295683\":0,\"123078199\":19},\"sum\":37537668552},\"wr.scenebuild_time\":{\"values\":{\"65536\":0,\"220435\":0,\"3444\":0,\"4466\":0,\"2896\":0,\"2233\":0,\"169979\":0,\"1448\":0,\"1048576\":0,\"25267\":0,\"1579\":0,\"3234250\":0,\"1246974\":0,\"131072\":0,\"84989\":0,\"1327\":0,\"939\":2514,\"92681\":0,\"77935\":0,\"339958\":0,\"21247\":0,\"2097152\":0,\"60096\":0,\"881743\":0,\"1482910\":0,\"19483\":0,\"7512\":0,\"1116\":0,\""
		"285870\":0,\"23170\":0,\"12633\":0,\"1617125\":0,\"9741\":0,\"404281\":0,\"480774\":0,\"10623\":0,\"1722\":0,\"1359834\":0,\"808562\":0,\"50535\":0,\"55108\":0,\"35733\":0,\"623487\":0,\"1923096\":1,\"32768\":0,\"1217\":0,\"571740\":0,\"11585\":0,\"6316\":0,\"120193\":0,\"16384\":0,\"17866\":0,\"2048\":0,\"46340\":0,\"440871\":0,\"2655\":0,\"2965820\":2,\"1143480\":0,\"679917\":0,\"4870\":0,\"262144\":0,\"71467\":0,\"370727\":0,\"13777\":0,\"202140\":0,\"15024\":0,\"3158\":0,\"8933\":0,\"5311\":0,"
		"\"3756\":0,\"110217\":0,\"2493948\":0,\"142935\":0,\"2435\":0,\"1763487\":0,\"42494\":0,\"30048\":0,\"1878\":0,\"5792\":0,\"155871\":0,\"2286960\":0,\"101070\":0,\"185363\":0,\"2719669\":0,\"311743\":0,\"741455\":0,\"8192\":0,\"961548\":19,\"6888\":0,\"38967\":0,\"1024\":0,\"240387\":0,\"524288\":0,\"4096\":0,\"27554\":0},\"sum\":29514000},\"glean.upload.send_failure\":{\"values\":{\"10215211334\":1,\"11139766950\":0,\"9367390095\":1},\"sum\":20856620400},\"wr.time_to_render_start\":{\"values\":{"
		"\"4466\":0,\"311743\":282,\"71467\":46,\"30769549\":0,\"881743\":71,\"2896\":0,\"2097152\":8,\"1327\":0,\"1763487\":7,\"4573920\":0,\"110217\":96,\"1923096\":8,\"33554432\":1,\"2435\":0,\"1116\":0,\"7512\":0,\"169979\":96,\"4987896\":0,\"5311\":0,\"6468501\":0,\"19951584\":0,\"939\":7,\"21757357\":3,\"1143480\":25,\"6888\":0,\"9147841\":1,\"7053950\":1,\"42494\":1,\"3526975\":2,\"1217\":0,\"13777\":0,\"262144\":201,\"1024\":0,\"120193\":110,\"2233\":0,\"6316\":0,\"4870\":0,\"60096\":15,\"2655\":0,"
		"\"2719669\":2,\"440871\":415,\"38967\":0,\"65536\":27,\"1246974\":19,\"7692387\":0,\"28215801\":1,\"77935\":72,\"25874004\":0,\"14107900\":0,\"46340\":0,\"25267\":1,\"18295683\":0,\"131072\":98,\"15384774\":1,\"4194304\":2,\"3756\":0,\"404281\":403,\"17866\":0,\"55108\":6,\"741455\":184,\"623487\":304,\"3444\":0,\"15024\":0,\"9975792\":1,\"3846193\":0,\"21247\":0,\"10623\":0,\"1448\":0,\"339958\":333,\"84989\":68,\"12633\":0,\"2286960\":2,\"30048\":2,\"202140\":138,\"32768\":0,\"11863283\":1,\""
		"220435\":160,\"2493948\":4,\"3158\":0,\"8933\":0,\"5931641\":0,\"571740\":316,\"50535\":5,\"23726566\":0,\"2048\":0,\"1617125\":8,\"480774\":457,\"12937002\":0,\"1579\":0,\"1878\":0,\"10878678\":0,\"679917\":224,\"370727\":337,\"1048576\":36,\"240387\":179,\"1722\":0,\"155871\":110,\"524288\":407,\"142935\":89,\"19483\":0,\"5439339\":0,\"16384\":0,\"92681\":109,\"3234250\":1,\"285870\":269,\"185363\":106,\"27554\":0,\"16777216\":0,\"5792\":0,\"36591367\":0,\"2965820\":2,\"961548\":47,\"101070\""
		":114,\"808562\":117,\"1359834\":16,\"23170\":0,\"9741\":0,\"11585\":0,\"8388608\":2,\"1482910\":11,\"4096\":0,\"35733\":0,\"8192\":0},\"sum\":2893957718},\"wr.rasterize_glyphs_time\":{\"values\":{\"169979\":3,\"623487\":1,\"110217\":3,\"55108\":12,\"1116\":17,\"71467\":9,\"571740\":2,\"12633\":9,\"2233\":237,\"1048576\":0,\"10623\":9,\"2896\":437,\"480774\":0,\"881743\":1,\"7512\":6,\"2655\":261,\"3234250\":0,\"17866\":7,\"808562\":0,\"1878\":203,\"1217\":28,\"6316\":38,\"1722\":100,\"404281\":0,"
		"\"19483\":2,\"524288\":2,\"3444\":470,\"3158\":543,\"2435\":264,\"240387\":0,\"2286960\":0,\"11585\":11,\"679917\":0,\"16384\":5,\"50535\":14,\"3756\":359,\"2719669\":1,\"42494\":18,\"262144\":4,\"1448\":43,\"2048\":215,\"92681\":4,\"15024\":3,\"285870\":1,\"741455\":0,\"5792\":56,\"8192\":14,\"65536\":7,\"961548\":2,\"84989\":5,\"220435\":0,\"60096\":8,\"1579\":150,\"1359834\":1,\"27554\":6,\"2097152\":1,\"2493948\":0,\"77935\":9,\"38967\":20,\"1246974\":0,\"13777\":6,\"30048\":8,\"6888\":29,\""
		"8933\":17,\"142935\":1,\"101070\":2,\"23170\":6,\"2965820\":1,\"46340\":9,\"202140\":1,\"1143480\":0,\"311743\":0,\"35733\":4,\"370727\":1,\"155871\":1,\"120193\":3,\"131072\":3,\"1923096\":0,\"1024\":12,\"339958\":0,\"4466\":216,\"440871\":2,\"939\":7,\"32768\":9,\"185363\":3,\"21247\":4,\"4870\":204,\"25267\":9,\"1482910\":1,\"5311\":92,\"1327\":53,\"1763487\":0,\"1617125\":0,\"4096\":303,\"9741\":9},\"sum\":45998500},\"wr.time_to_frame_build\":{\"values\":{\"42494\":35,\"262144\":42,\"15024\":0"
		",\"155871\":272,\"71467\":206,\"679917\":2,\"16384\":2,\"65536\":176,\"10623\":1,\"110217\":362,\"11585\":0,\"524288\":10,\"1048576\":0,\"339958\":10,\"741455\":5,\"17866\":2,\"46340\":35,\"13777\":2,\"169979\":254,\"7512\":1,\"1482910\":1,\"21247\":2,\"27554\":13,\"35733\":20,\"1246974\":0,\"623487\":4,\"77935\":253,\"808562\":4,\"55108\":101,\"38967\":20,\"32768\":19,\"370727\":12,\"440871\":5,\"120193\":333,\"92681\":340,\"571740\":6,\"185363\":192,\"30048\":22,\"311743\":11,\"84989\":310,\""
		"1617125\":0,\"881743\":2,\"202140\":147,\"240387\":59,\"19483\":4,\"220435\":83,\"23170\":4,\"50535\":67,\"131072\":310,\"60096\":122,\"101070\":386,\"1359834\":0,\"9741\":1,\"480774\":7,\"1763487\":1,\"404281\":4,\"142935\":323,\"8192\":1,\"25267\":15,\"285870\":14,\"8933\":0,\"961548\":1,\"1143480\":1,\"1923096\":0,\"12633\":0},\"sum\":600994600},\"wr.sceneswap_time\":{\"values\":{\"55108\":53,\"1763487\":0,\"84989\":106,\"142935\":119,\"524288\":3,\"1048576\":3,\"1359834\":1,\"9975792\":0,\""
		"50535\":51,\"185363\":133,\"623487\":2,\"2965820\":0,\"101070\":119,\"5931641\":0,\"169979\":140,\"404281\":19,\"262144\":86,\"30048\":0,\"285870\":100,\"110217\":107,\"571740\":3,\"3846193\":0,\"6468501\":0,\"92681\":113,\"311743\":69,\"7692387\":0,\"2097152\":0,\"8388608\":0,\"71467\":72,\"7053950\":0,\"1246974\":0,\"961548\":2,\"339958\":42,\"240387\":117,\"370727\":29,\"440871\":9,\"3526975\":0,\"32768\":0,\"3234250\":0,\"808562\":0,\"4194304\":0,\"679917\":8,\"155871\":133,\"4987896\":0,\""
		"60096\":58,\"480774\":10,\"42494\":49,\"202140\":160,\"2286960\":0,\"77935\":80,\"2493948\":3,\"2719669\":0,\"5439339\":0,\"38967\":22,\"27554\":1,\"1482910\":1,\"35733\":12,\"9147841\":1,\"131072\":94,\"4573920\":0,\"220435\":130,\"46340\":33,\"1617125\":0,\"65536\":98,\"1923096\":0,\"741455\":6,\"1143480\":0,\"120193\":135,\"881743\":4},\"sum\":454747500},\"fog.ipc.flush_durations\":{\"values\":{\"10878678\":1,\"12937002\":3,\"11863283\":1,\"25874004\":10,\"19951584\":4,\"23726566\":7,\""
		"47453132\":1,\"28215801\":7,\"51748008\":1,\"43514714\":0,\"14107900\":3,\"39903169\":0,\"15384774\":5,\"36591367\":1,\"30769549\":1,\"21757357\":4,\"18295683\":1,\"56431603\":0,\"33554432\":3,\"16777216\":9},\"sum\":1471046500},\"wr.rasterize_blobs_time\":{\"values\":{\"2965820\":1,\"6316\":0,\"808562\":2,\"16384\":1,\"27554\":0,\"2435\":0,\"1048576\":3,\"961548\":9,\"1617125\":2,\"38967\":4,\"220435\":1,\"46340\":0,\"2719669\":2,\"155871\":7,\"1327\":0,\"440871\":2,\"4194304\":0,\"42494\":1,\""
		"7512\":1,\"939\":746,\"2896\":44,\"110217\":3,\"1579\":0,\"1448\":0,\"2655\":0,\"4466\":0,\"1359834\":0,\"2493948\":3,\"3756\":22,\"9741\":0,\"480774\":1,\"92681\":5,\"679917\":10,\"311743\":2,\"12633\":0,\"4096\":0,\"5311\":0,\"524288\":2,\"120193\":3,\"55108\":1,\"1024\":0,\"571740\":4,\"15024\":3,\"2286960\":0,\"84989\":5,\"1722\":0,\"1482910\":1,\"3526975\":0,\"21247\":0,\"185363\":6,\"32768\":3,\"8192\":0,\"101070\":4,\"262144\":2,\"2097152\":2,\"881743\":6,\"202140\":1,\"623487\":2,\"4870\""
		":4,\"50535\":2,\"1246974\":0,\"4987896\":0,\"19483\":0,\"60096\":4,\"13777\":1,\"1763487\":2,\"10623\":0,\"2233\":0,\"404281\":2,\"169979\":5,\"285870\":3,\"1116\":0,\"23170\":2,\"35733\":3,\"65536\":4,\"30048\":2,\"3158\":0,\"131072\":6,\"3444\":0,\"142935\":6,\"240387\":0,\"1217\":0,\"8933\":0,\"71467\":3,\"17866\":0,\"77935\":1,\"1878\":97,\"370727\":4,\"3234250\":0,\"11585\":1,\"5792\":3,\"339958\":2,\"1143480\":3,\"1923096\":0,\"741455\":2,\"6888\":1,\"4573920\":1,\"3846193\":0,\"2048\":0,\""
		"25267\":0},\"sum\":87823000},\"paint.build_displaylist_time\":{\"values\":{\"19483\":1,\"524288\":119,\"110217\":22,\"33554432\":1,\"8388608\":0,\"30048\":6,\"18295683\":0,\"7053950\":0,\"1482910\":4,\"679917\":74,\"11863283\":0,\"23170\":3,\"131072\":40,\"1048576\":30,\"77935\":15,\"55108\":4,\"2493948\":0,\"101070\":15,\"3846193\":0,\"36591367\":0,\"71467\":26,\"13777\":8,\"1923096\":2,\"16384\":10,\"339958\":148,\"17866\":9,\"808562\":56,\"32768\":5,\"262144\":108,\"28215801\":0,\"741455\":75,"
		"\"25874004\":0,\"881743\":52,\"1246974\":13,\"370727\":151,\"3234250\":1,\"4573920\":0,\"7692387\":0,\"46340\":6,\"84989\":11,\"11585\":1,\"15384774\":0,\"480774\":137,\"1143480\":17,\"185363\":103,\"2719669\":2,\"30769549\":0,\"220435\":114,\"5439339\":0,\"571740\":110,\"21757357\":0,\"60096\":6,\"92681\":15,\"21247\":3,\"38967\":6,\"155871\":89,\"240387\":117,\"12937002\":0,\"35733\":3,\"15024\":3,\"1359834\":7,\"961548\":34,\"4194304\":0,\"50535\":8,\"14107900\":0,\"1763487\":4,\"440871\":146,"
		"\"142935\":62,\"1617125\":3,\"27554\":4,\"285870\":127,\"2965820\":0,\"5931641\":0,\"3526975\":1,\"169979\":78,\"9147841\":0,\"202140\":102,\"10878678\":0,\"2097152\":3,\"16777216\":0,\"6468501\":0,\"12633\":0,\"404281\":149,\"65536\":10,\"623487\":86,\"4987896\":0,\"25267\":4,\"311743\":125,\"9975792\":0,\"19951584\":0,\"120193\":30,\"2286960\":0,\"23726566\":0,\"42494\":9},\"sum\":1159347300}},\"labeled_boolean\":{\"cookie.banners.private_window_service_mode\":{\"disabled\":true,\"invalid\""
		":false,\"reject\":false,\"reject_or_accept\":false},\"cookie.banners.normal_window_service_mode\":{\"disabled\":true,\"invalid\":false,\"reject\":false,\"reject_or_accept\":false}},\"custom_distribution\":{\"timer_thread.timers_fired_per_wakeup\":{\"values\":{\"5\":13,\"11\":4,\"6\":10,\"13\":0,\"3\":172,\"0\":10081,\"4\":45,\"9\":1,\"2\":681,\"20\":0,\"7\":7,\"1\":7031,\"16\":3},\"sum\":9367},\"power.battery.percentage_when_user_active\":{\"values\":{\"72\":0,\"52\":0,\"87\":0,\"15\":0,\"9\":0,\""
		"39\":0,\"96\":6,\"1\":0,\"83\":0,\"68\":0,\"48\":0,\"67\":0,\"6\":0,\"95\":0,\"44\":0,\"61\":0,\"47\":0,\"45\":0,\"56\":0,\"79\":0,\"85\":0,\"41\":0,\"51\":0,\"64\":0,\"71\":0,\"91\":0,\"78\":0,\"40\":0,\"32\":0,\"25\":0,\"10\":0,\"37\":0,\"50\":0,\"97\":0,\"65\":0,\"82\":0,\"77\":0,\"49\":0,\"31\":0,\"4\":0,\"81\":0,\"29\":0,\"55\":0,\"66\":0,\"16\":0,\"38\":0,\"21\":0,\"58\":0,\"22\":0,\"53\":0,\"60\":0,\"36\":0,\"89\":0,\"84\":0,\"88\":0,\"20\":0,\"13\":0,\"54\":24,\"92\":63,\"86\":0,\"59\":0,"
		"\"30\":0,\"27\":0,\"93\":14,\"26\":0,\"3\":0,\"5\":0,\"14\":0,\"11\":0,\"17\":0,\"33\":0,\"34\":0,\"76\":0,\"73\":0,\"0\":0,\"42\":0,\"35\":0,\"18\":0,\"62\":0,\"74\":0,\"80\":0,\"7\":0,\"24\":0,\"28\":0,\"43\":0,\"19\":0,\"69\":0,\"46\":0,\"57\":0,\"63\":0,\"70\":0,\"23\":0,\"90\":0,\"94\":0,\"75\":0,\"2\":0,\"8\":0,\"12\":0},\"sum\":8970}},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":5,\"events\":3,\"messaging-system\":5,\"metrics\":1,\"newtab\":3,\"pageload\":3},\""
		"power.cpu_time_per_process_type_ms\":{\"extension\":10332,\"gpu\":27284,\"parent.active\":82282,\"parent.inactive\":154637,\"prealloc\":21553,\"privilegedabout\":11319,\"web.background\":8215,\"web.foreground\":8834},\"power.gpu_time_per_process_type_ms\":{\"gpu\":5948},\"power.wakeups_per_process_type\":{\"extension\":10077,\"gpu\":109555,\"parent.active\":178823,\"parent.inactive\":277929,\"prealloc\":2830,\"privilegedabout\":12850,\"web.background\":5925,\"web.foreground\":64991},\""
		"network.data_size_per_type\":{\"__other__\":4922,\"application_other\":126403,\"ocsp\":63977,\"octet_stream\":55838,\"text_html\":3864,\"text_json\":264177,\"text_other\":10759,\"text_plain\":94533},\"pwmgr.form_autofill_result\":{\"no_saved_logins\":8},\"glean.upload.ping_upload_failure\":{\"recoverable\":2},\"glean.error.invalid_state\":{\"fog.initialization\":2,\"glean.baseline.duration\":2},\"gmp.update_xml_fetch_result\":{\"content_sig_success\":3},\"network.data_size_pb_per_type\":{\""
		"application_other\":5337,\"image\":213402,\"ocsp\":6500,\"text_css\":19263,\"text_html\":170713},\"ping.centre.send_successes_by_namespace\":{\"messaging_system\":5},\"networking.speculative_connect_outcome\":{\"aborted_socket_limit\":246,\"successful\":209}},\"string_list\":{\"background_update.reasons_to_not_update\":[\"WINDOWS_CANNOT_USUALLY_USE_BITS\"]},\"memory_distribution\":{\"glean.database.size\":{\"values\":{\"27554\":1,\"24196\":1,\"30048\":1,\"25267\":0,\"28774\":0,\"31378\":0,\"26386"
		"\":0},\"sum\":83407},\"fog.ipc.buffer_sizes\":{\"values\":{\"32767\":1,\"1023\":0,\"1798\":1,\"38967\":0,\"107\":0,\"1116\":2,\"469\":0,\"15689\":0,\"122\":0,\"1512\":2,\"79\":8,\"60096\":0,\"94\":0,\"224\":0,\"6888\":0,\"4870\":1,\"6316\":1,\"2896\":0,\"6049\":0,\"27554\":0,\"12098\":0,\"861\":2,\"1271\":4,\"15024\":0,\"234\":3,\"215\":0,\"34218\":1,\"7844\":0,\"14387\":0,\"55108\":2,\"693\":0,\"96785\":1,\"103\":0,\"46340\":0,\"11585\":1,\"181\":0,\"4277\":1,\"82\":0,\"2435\":0,\"90\":0,\"86\":0"
		",\"899\":2,\"40693\":0,\"17109\":0,\"331\":0,\"13777\":0,\"173\":53,\"31378\":0,\"127\":0,\"13193\":0,\"37315\":0,\"92681\":0,\"756\":0,\"18657\":0,\"2773\":0,\"939\":1,\"30048\":1,\"608\":1,\"21247\":0,\"84989\":0,\"77935\":0,\"20346\":0,\"279\":5,\"789\":0,\"24196\":0,\"42494\":0,\"4664\":1,\"724\":0,\"1722\":0,\"824\":1,\"378\":0,\"16383\":0,\"1579\":1,\"10623\":0,\"9328\":0,\"28774\":0,\"255\":9,\"23170\":0,\"3596\":0,\"57548\":0,\"50535\":0,\"2543\":0,\"65535\":0,\"534\":0,\"88752\":0,\"152\""
		":0,\"68437\":0,\"189\":0,\"133\":0,\"7193\":0,\"117\":0,\"197\":0,\"1166\":20,\"206\":2,\"291\":3,\"267\":2,\"19483\":0,\"81386\":0,\"3756\":1,\"304\":2,\"22188\":0,\"490\":0,\"5547\":0,\"145\":26,\"2233\":1,\"1649\":1,\"3922\":0,\"52772\":0,\"5086\":1,\"663\":1,\"430\":1,\"5792\":0,\"1878\":0,\"8191\":0,\"74631\":0,\"1448\":0,\"25267\":1,\"4095\":0,\"11094\":0,\"245\":1,\"62757\":0,\"6596\":0,\"2047\":0,\"8554\":0,\"980\":1,\"139\":0,\"48392\":0,\"98\":0,\"394\":0,\"511\":0,\"3444\":0,\"7512\":0,"
		"\"449\":0,\"317\":0,\"346\":0,\"3158\":0,\"158\":190,\"26386\":0,\"12633\":0,\"71467\":0,\"583\":6,\"3298\":0,\"2332\":0,\"9741\":1,\"1069\":1,\"1327\":1,\"3024\":1,\"5311\":0,\"558\":0,\"2655\":0,\"2138\":0,\"1386\":0,\"165\":22,\"8933\":0,\"1961\":0,\"412\":0,\"1217\":0,\"635\":0,\"35733\":0,\"112\":0,\"10173\":0,\"4466\":0,\"17866\":0,\"362\":0,\"101070\":0,\"44376\":0},\"sum\":499661}},\"quantity\":{\"browser.engagement.profile_count\":10}}}", 
		LAST);

	web_custom_request("changeset_4", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/security-state/collections/cert-revocations/changeset?_expected=1693191435994&_since=%221692975500434%22", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_url("changeset_5", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/monitor/collections/changes/changeset?_expected=%221693202593375%22", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://services.addons.mozilla.org/api/v4/addons/search/?guid=default-theme%40mozilla.org%2Caddons-search-detection%40mozilla.com%2Cgoogle%40search.mozilla.org%2Cwikipedia%40search.mozilla.org%2Cbing%40search.mozilla.org%2Cddg%40search.mozilla.org%2Cfirefox-compact-light%40mozilla.org%2Cfirefox-compact-dark%40mozilla.org%2Cfirefox-alpenglow%40mozilla.org&lang=en-US", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/onecrl.content-signature.mozilla.org-2023-10-09-11-30-12.chain", "Referer=", ENDITEM, 
		LAST);

	web_url("update.xml_4", 
		"URL=https://aus5.mozilla.org/update/3/SystemAddons/116.0.3/20230815173142/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%2010.0.0.0.19045.2364%20(x64)/default/default/update.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x07=\\x9BF-\\x83\\xFF:\\x9E\\xBEp\\xBD\\xF1\\xF7\\x9F\\xD2", 
		LAST);

	web_custom_request("a9760d83-1902-4412-9e8b-856cb0afa15c", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/a9760d83-1902-4412-9e8b-856cb0afa15c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":263,\"start_time\":\"2023-08-25T14:25+05:30\",\"end_time\":\"2023-08-28T12:10+05:30\",\"experiments\":{\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\"}},\""
		"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\",\"type\":\"nimbus-nimbus\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\",\"type\":\"nimbus-rollout\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\""
		"4331d05f-bced-426c-98ba-bc7b8d870645\",\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"windows_build_number\":19045,\"first_run_date\":\"2022-12-02+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"os\":\"Windows\",\"app_display_version\":\"116.0.3\",\"os_version\":\"10.0\",\"app_build\":\"20230815173142\",\"architecture\":\"x86_64\",\"app_channel\":\"release\"},\"metrics\":{\"uuid\":{\"messaging_system.impression_id\":\""
		"309f36cc-6348-4bb8-9724-81715552739d\"},\"string\":{\"messaging_system.ping_type\":\"undesired-events\",\"messaging_system.addon_version\":\"20230815173142\",\"messaging_system.event\":\"ASR_RS_NO_MESSAGES\",\"messaging_system.locale\":\"en-US\"},\"text\":{\"messaging_system.event_context\":\"\\\"whats-new-panel\\\"\",\"messaging_system.message_id\":\"n/a\"}}}", 
		LAST);

	web_custom_request("r3.o.lencr.org_10", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04n\\xB3|\\x08\\xFFpM\\xBC\\xA2\\xB3uk_\\xD1?0x", 
		LAST);

	web_custom_request("changeset_6", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/security-state/collections/intermediates/changeset?_expected=1693105023362&_since=%221692910623870%22", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("downloads", 
		"URL=https://shavar.services.mozilla.com/downloads?client=navclient-auto-ffox&appver=116.0&pver=2.2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		"Body=ads-track-digest256;a:1690883483\nanalytics-track-digest256;a:1690883483\nbase-cryptomining-track-digest256;a:1690883483\nbase-email-track-digest256;a:1690883483\nbase-fingerprinting-track-digest256;a:1690883483\ncontent-email-track-digest256;a:1690883483\ncontent-track-digest256;a:1690883483\ngoogle-trackwhite-digest256;a:1690883483\nmozplugin-block-digest256;a:1604686195\nmozstd-trackwhite-digest256;a:1690883483\nsocial-track-digest256;a:1690883483\n"
		"social-tracking-protection-facebook-digest256;a:1690883483\nsocial-tracking-protection-linkedin-digest256;a:1690883483\nsocial-tracking-protection-twitter-digest256;a:1690883483\n", 
		LAST);

	web_custom_request("95cd24bc-9782-4d4f-887c-5dcf503a659e", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/95cd24bc-9782-4d4f-887c-5dcf503a659e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":264,\"start_time\":\"2023-08-28T12:10+05:30\",\"end_time\":\"2023-08-28T12:10+05:30\",\"experiments\":{\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\"}},\""
		"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\",\"type\":\"nimbus-nimbus\"}},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\""
		"4331d05f-bced-426c-98ba-bc7b8d870645\",\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"first_run_date\":\"2022-12-02+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":19045,\"app_build\":\"20230815173142\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"app_display_version\":\"116.0.3\",\"architecture\":\"x86_64\",\"os\":\"Windows\"},\"metrics\":{\"uuid\":{\"messaging_system.impression_id\":\""
		"309f36cc-6348-4bb8-9724-81715552739d\"},\"string\":{\"messaging_system.event\":\"ASR_RS_NO_MESSAGES\",\"messaging_system.addon_version\":\"20230815173142\",\"messaging_system.locale\":\"en-US\",\"messaging_system.ping_type\":\"undesired-events\"},\"text\":{\"messaging_system.event_context\":\"\\\"whats-new-panel\\\"\",\"messaging_system.message_id\":\"n/a\"}}}", 
		LAST);

	web_url("v1_3", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("classify_client", 
		"URL=https://classify-client.services.mozilla.com/api/v1/classify_client/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("v1_4", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("v1_5", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_11", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04.\\xA1\\x12\\xDC\\xE1.\\xF4yf\\xE3\\x9F\\xFF\\x88A\\x9E\\xC4\\x85", 
		LAST);

	web_custom_request("r3.o.lencr.org_12", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04.\\xA1\\x12\\xDC\\xE1.\\xF4yf\\xE3\\x9F\\xFF\\x88A\\x9E\\xC4\\x85", 
		LAST);

	web_custom_request("r3.o.lencr.org_13", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04.\\xA1\\x12\\xDC\\xE1.\\xF4yf\\xE3\\x9F\\xFF\\x88A\\x9E\\xC4\\x85", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/normandy.content-signature.mozilla.org-2023-10-09-11-30-13.chain?cachebust=2017-06-13-21-06", "Referer=", ENDITEM, 
		"Url=https://firefox-settings-attachments.cdn.mozilla.net/security-state-staging/intermediates/6675899f-be87-41eb-9b0d-656394edfaea.pem", "Referer=", ENDITEM, 
		"Url=https://firefox-settings-attachments.cdn.mozilla.net/security-state-staging/intermediates/db48f214-40d6-42b2-a070-27fd1bbe65a7.pem", "Referer=", ENDITEM, 
		"Url=https://firefox-settings-attachments.cdn.mozilla.net/security-state-staging/intermediates/0f4a0c2f-72a0-436a-ab5c-c6019c2d0993.pem", "Referer=", ENDITEM, 
		LAST);

	return 0;
}
