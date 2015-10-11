set number "行番号を表示
set relativenumber
syntax on "コードの色分け

"aa文字コードの自動判別
set encoding=utf-8
set fileencodings=utf-8,iso-2022-jp,sjis,euc-jp,utf-8,cp932

"#####検索設定#####
set ignorecase "大文字/小文字の区別なく検索する
set smartcase "検索文字列に大文字が含まれている場合は区別して検索する
set wrapscan "検索時に最後まで行ったら最初に戻る

"新しい行のインデントを現在行と同じにする
set autoindent
set nocompatible
filetype plugin indent off

"折りたたみの設定
set foldcolumn=4
set foldmethod=indent

set tabstop=4
set shiftwidth=4
set noexpandtab

set nocompatible

nmap <C-c> <esc><esc><esc><esc>

" MEMO:$GOPATHがなければ手動でパス指定
if $GOPATH != ''
	" golintの実行パスを追加
	execute "set rtp+=".globpath($GOPATH,"src/github.com/golang/lint/misc/vim")
	" syntastic設定
	let g:syntastic_go_checkers = ['go', 'golint', 'govet']
endif
filetype off            " for NeoBundle

if has('vim_starting')
	set rtp+=$HOME/.vim/bundle/neobundle.vim/
endif
call neobundle#begin(expand('~/.vim/bundle'))
NeoBundleFetch 'Shougo/neobundle.vim'

" ここから NeoBundle でプラグインを設定します

" NeoBundle で管理するプラグインを追加します。
NeoBundle 'Shougo/neocomplcache.git'
NeoBundle 'Shougo/neosnippet.git'
NeoBundle 'Shougo/unite.vim.git'
NeoBundle 'Townk/vim-autoclose'
NeoBundle 'Shougo/neosnippet-snippets'
NeoBundle 'thinca/vim-quickrun'
NeoBundle 'Shougo/vimproc'
NeoBundleLazy 'vim-jp/cpp-vim',{
			\ 'autoload' : {'filetypes' : 'cpp'}
			\}
NeoBundle "osyo-manga/vim-marching"
NeoBundle 'vim-jp/vim-go-extra'
NeoBundle 'Blackrush/vim-gocode'
NeoBundle "Shougo/neocomplete.vim"
NeoBundle 'fatih/vim-go'
NeoBundle "itchyny/vim-pdf"
NeoBundle 'scrooloose/syntastic'
NeoBundle 'sjl/gundo.vim'

nnoremap <F5> :GundoToggle<CR>

let g:syntastic_mode_map = { 'mode': 'passive',
			\ 'active_filetypes': ['go'] }
let g:syntastic_go_checkers = ['go', 'golint']
let g:marching_clang_command_option="-std=c++1y"
let g:marching_enable_neocomplete = 1

if !exists('g:neocomplete#force_omni_input_patterns')
	let g:neocomplete#force_omni_input_patterns = {}
endif

let g:neocomplete#force_omni_input_patterns.cpp =
			\ '[^.[:digit:] *\t]\%(\.\|->\)\w*\|\h\w*::\w*'

call neobundle#end()
let g:neosnippet#snippets_directory='~/.vim/bundle/snipmate-snippets/snippets'
let g:neocomplcache_enable_at_startup = 1
let g:unite_truncate=1
"Plugin key-mappings.
imap <C-k>     <Plug>(neosnippet_expand_or_jump)
smap <C-k>     <Plug>(neosnippet_expand_or_jump)

" SuperTab like snippets behavior.
imap <expr><TAB> neosnippet#expandable() <Bar><bar> neosnippet#jumpable() ? "\<Plug>(neosnippet_expand_or_jump)" : pumvisible() ? "\<C-n>" : "\<TAB>"
smap <expr><TAB> neosnippet#expandable() <Bar><bar> neosnippet#jumpable() ? "\<Plug>(neosnippet_expand_or_jump)" : "\<TAB>"

" For snippet_complete marker.
if has('conceal')
	set conceallevel=2 concealcursor=i
endif "

if has('persistent_undo')
	set undodir=~/.vim/undo
	set undofile
endif

au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g`\""

"golang
auto BufWritePre *.go Fmt

filetype plugin indent on       " restore filetype
exe "set rtp+=".globpath($GOPATH, "src/github.com/nsf/gocode/vim")
set completeopt=menu,preview
