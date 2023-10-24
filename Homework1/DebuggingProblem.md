    要关注好.vscode内容的位置配置是否正确，c_cpp_properties.json用来控制C++语言相关的参数
而gdb调试器应该在launch.json里面配置，尤其注意调试文件的位置是否正确，自动生成的参数必须需要修改才能够使用
** 使用Vscode的运行和调试全都失败，肯定是Settings和Tasks的json文件里面的配置不正确，暂时没找到怎么改的。