TC_01_lanuch()
{
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_start_transaction("TC_01_lanuch");

	web_reg_save_param_ex(
		"ParamName=C_jsessionid",
		"LB=jsessionid=",
		"RB=\" enctype",
		SEARCH_FILTERS,
		"Scope=Body",
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
		"Url=images/login.gif;jsessionid={C_jsessionid}", ENDITEM, 
		"Url=images/spacer.gif", ENDITEM, 
		"Url=images/submit2.gif", ENDITEM, 
		"Url=images/signup.gif;jsessionid={C_jsessionid}", ENDITEM, 
		LAST);
	
	lr_think_time(think_time);
	lr_end_transaction("TC_01_lanuch", LR_AUTO);

	return 0;
}
