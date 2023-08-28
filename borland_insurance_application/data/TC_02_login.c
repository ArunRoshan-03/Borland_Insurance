TC_02_login()
{

	lr_think_time(16);

	web_submit_data("index.jsf;jsessionid=93F8FCA667DA2007ABA11BFFA93CA37B", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/index.jsf;jsessionid=93F8FCA667DA2007ABA11BFFA93CA37B", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value=john.smith@gmail.com", ENDITEM, 
		"Name=login-form:password", "Value=john ", ENDITEM, 
		"Name=login-form:login.x", "Value=47", ENDITEM, 
		"Name=login-form:login.y", "Value=5", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(10);

	web_submit_data("index.jsf_3", 
		"Action=https://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://demo.borland.com/InsuranceWebExtJS/index.jsf", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=login-form", "Value=login-form", ENDITEM, 
		"Name=login-form:email", "Value=udemo@gmail.com", ENDITEM, 
		"Name=login-form:password", "Value=Atmecs", ENDITEM, 
		"Name=login-form:login.x", "Value=48", ENDITEM, 
		"Name=login-form:login.y", "Value=7", ENDITEM, 
		"Name=javax.faces.ViewState", "Value=j_id1:j_id2", ENDITEM, 
		LAST);

	return 0;
}
