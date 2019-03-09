#python3
# By Playwin
 
import os
import re
from selenium import webdriver
import selenium
import time
import requests
import random

def get_html():
    username = "" # cuit教务处账号
    password = "" # 密码
    url = 'http://jszx-jxpt.cuit.edu.cn/Jxgl/Xs/netKs/editSj.asp?UTp=Xs&Tx=51_1&ObjId=2018081129&Id=8725'

    cuit = webdriver.Firefox()

    cuit.get("http://login.cuit.edu.cn/Login/xLogin/Login.asp")
    user = cuit.find_element_by_xpath('//*[@id="txtId"]') # 找到用户名输入框
    user.send_keys(username)
    pwd = cuit.find_elements_by_xpath('//*[@id="txtMM"]') # 找到密码输入框
    pwd[0].send_keys(password)
    code = cuit.find_element_by_xpath('//*[@id="txtVC"]') # 找到验证码输入框
    s = input('请输入验证码：')
    code.send_keys(s)
    

    login_button = cuit.find_element_by_xpath('//*[@id="IbtnEnter"]').click() # 找到登录按钮
    time.sleep(1)
    cuit.get("http://jszx-jxpt.cuit.edu.cn/Jxgl/Xs/MainMenu.asp") #转回菜单

    
    
    time.sleep(1)
    cuit.get('http://jszx-jxpt.cuit.edu.cn/Jxgl/Xs/netKs/sj.asp?UTp=Xs') # 所有作业界面
    
    html = cuit.page_source
    homework_id = re.findall(r"sjDb.+Id=(\d+)",html) # 获得作业ID
    homework_url = 'http://jszx-jxpt.cuit.edu.cn/Jxgl/Xs/netKs/sjDb.asp?UTp=Xs&ObjId=' + username + '&Id='+ str(homework_id[0]) # 题目分类
    cuit.get(homework_url)

    html = cuit.page_source
    title_id = re.findall(r"editSj.+Id=(\d+)",html) # 获得分类ID
    title_url = 'http://jszx-jxpt.cuit.edu.cn/Jxgl/Xs/netKs/editSj.asp?UTp=Xs&Tx=52_2&ObjId=' + username + '&Id=' + str(title_id[0]) # 题目界面
    cuit.get(title_url)

    problem_html = cuit.page_source
    print(problem_html)

    up_url = 'http://jszx-jxpt.cuit.edu.cn/jxgl/share/ChkLgn.asp?txtId=jK_1001_'+ str(homework_id[0]) + '|Xs_' + username
    cuit.get(up_url) # 已上传作业界面
    
    return problem_html,cuit


    
def get_up_name(html):
    up_name = re.findall(r'程序([a-zA-Z]\d+\.(?:c|C))',html)
    print(up_name)
    
    return up_name



def search_file(each_name,high,low,file_name):
     
    while low <= high:
        mid = int((high + low) / 2)
        if each_name.upper() == file_name[mid].upper():
            return file_name[mid]

        elif each_name.upper() < file_name[mid].upper():
            high = mid - 1

        elif each_name.upper() > file_name[mid].upper():
            low = mid + 1

        else:
            print("找不到：",each_name)
    return None

def up_file(up_name,cuit):
    file_name = os.listdir("./c_homework")
    
    high = len(file_name) - 1
    low = 0 
    
    for each_name in up_name[10:]:

        file = search_file(each_name,high,low,file_name)
        
        if file:
            # path = 'D:\\c_homework\\' + file
            path =  "D:\\C\\c_homework\\" + file  # 修改c_homework路径为绝对路径
            cuit.find_element_by_xpath('/html/body/form/table[1]/tbody/tr/td/a/b').click()
            cuit.find_element_by_xpath('/html/body/table/tbody/tr[3]/td[2]/input[1]').send_keys(path)
            cuit.find_element_by_xpath('/html/body/table/tbody/tr[3]/td[2]/p/input[2]').click()
            
            # num = random.randint(300,900)
            # time.sleep(num)
            
        
        else:
            print("题库里没有" + each_name)
            

       
        

if __name__ == "__main__":
    
    print('----------start----------')

    problem_html,cuit = get_html()
    up_name = get_up_name(problem_html)
    up_file(up_name,cuit)

    print('----------exit----------')
