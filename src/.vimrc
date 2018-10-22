" 寻找全局配置文件
let g:ycm_global_ycm_extra_conf='~/.vim/.ycm_extra_conf.py'
let g:ycm_server_python_interpreter='/usr/bin/python3'

set nu			   "显示行数
set tabstop=8              "tab 长度设置为 4
set nobackup               "覆盖文件时不备份
set noswapfile             " 没有缓存
set cursorline             "突出显示当前行
set ruler                  "在右下角显示光标位置的状态行
set autoindent             "自动缩进
set mouse=v                "复制
set fdm=manual             " 手动折叠
set clipboard+=unnamed     "共享粘贴板
set hlsearch      	   "高亮度搜寻 " 去掉 noh
set backspace=indent,eol,start "能够backspace

"设置颜色
syntax on
if &term =~ "xterm"
  if has("terminfo")
    set t_Co=8
    set t_Sf=^[[3%p1%dm
    set t_Sb=^[[4%p1%dm
  else
    set t_Co=8
    set t_Sf=^[[3%dm
    set t_Sb=^[[4%dm
  endif
endif


set nocompatible              " be iMproved, required
filetype off                  " required
autocmd vimenter * NERDTree 

" set the runtime path to include Vundle and initialize
	set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

	"let Vundle manage Vundle
	" required!
	Plugin 'gmarik/vundle'
	"<strong>Plugin 'gmarik/Vundle.vim'</strong>
	Plugin 'scrooloose/syntastic'
	" 树状结构
	Plugin 'scrooloose/nerdtree'
	"vim 主题
	Plugin 'vim-airline/vim-airline'
	Plugin 'vim-airline/vim-airline-themes'
	
	" original repos on GitHub
	Bundle 'tpope/vim-fugitive'
	Bundle 'Lokaltog/vim-easymotion'
	Bundle 'rstacruz/sparkup', {'rtp': 'vim/'}
	Bundle 'tpope/vim-rails.git'
	" vim-scripts repos
	Bundle 'L9'
	Bundle 'FuzzyFinder'
	" non-GitHub repos
	Bundle 'git://git.wincent.com/command-t.git'
	" Git repos on your local machine (i.e. when working on your own plugin)
	Bundle 'file:///Users/gmarik/path/to/plugin'
	" ...
	Bundle 'Valloric/YouCompleteMe'

call vundle#end()            " required
filetype plugin indent on " required!
	" 编码为utf-8
	set fileencodings=utf-8,gb2312,gbk,gb18030
	set termencoding=utf-8
	set encoding=utf-8


	" YouCompleteMe

	set runtimepath+=~/.vim/bundle/YouCompleteMe
	set completeopt=longest,menu				    "让Vim的补全菜单行为与一般IDE一致(参考VimTip1228)
	let g:ycm_collect_identifiers_from_tags_files = 1           " 开启 YCM 基于标签引擎
	let g:ycm_collect_identifiers_from_comments_and_strings = 1 " 注释与字符串中的内容也用于补全
	let g:syntastic_ignore_files=[".*\.py$"]
	let g:ycm_seed_identifiers_with_syntax = 1                  " 语法关键字补全
	let g:ycm_complete_in_comments = 1
	let g:ycm_confirm_extra_conf = 0
	let g:ycm_key_list_select_completion = ['<c-n>', '<Down>']  " 映射按键, 没有这个会拦截掉tab, 导致其他插件的tab不能用.
	let g:ycm_key_list_previous_completion = ['<c-p>', '<Up>']
	let g:ycm_complete_in_comments = 1                          " 在注释输入中也能补全
	let g:ycm_complete_in_strings = 1                           " 在字符串输入中也能补全
	let g:ycm_collect_identifiers_from_comments_and_strings = 1 " 注释和字符串中的文字也会被收入补全
	let g:ycm_global_ycm_extra_conf='~/.vim/bundle/YouCompleteMe/third_party/ycmd/cpp/ycm/.ycm_extra_conf.py'
	let g:ycm_show_diagnostics_ui = 1                           " 禁用语法检查
	let g:ycm_min_num_of_chars_for_completion=2                 " 从第2个键入字符就开始罗列匹配项
	inoremap <expr> <CR> pumvisible() ? "\<C-y>" : "\<CR>" |            " 回车即选中当前项
	nnoremap <c-j> :YcmCompleter GoToDefinitionElseDeclaration<CR>|     " 跳转到定义处
	"
	"vim-airline    
	let g:airline#extensions#tabline#enabled = 1

