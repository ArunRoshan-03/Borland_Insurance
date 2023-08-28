TC_02_login()
{
	lr_start_transaction("TC_02_login");

	web_submit_data("index.jsf;jsessionid={C_jsessionid}",
		"Action=https://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid={C_jsessionid}",
		"Method=POST",
		"EncodeAtSign=YES",
		"RecContentType=text/html",
		"Referer=https://demo.borland.com/InsuranceWebExtJS/",
		"Snapshot=t59.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=login-form", "Value=login-form", ENDITEM,
		"Name=login-form:email", "Value={user_email_id}", ENDITEM,
		"Name=login-form:password", "Value={p_password}", ENDITEM,
		"Name=login-form:login.x", "Value=47", ENDITEM,
		"Name=login-form:login.y", "Value=5", ENDITEM,
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM,
		LAST);
	
	lr_think_time(think_time);
	lr_end_transaction("TC_02_login", LR_AUTO);
	return 0;
}
