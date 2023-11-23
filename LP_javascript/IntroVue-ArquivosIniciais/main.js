const app = Vue.createApp({
    el: '#app',
    data() {
        return {
            carrinho: 0,
            produto: 'Camisa Próton',
            imagem: 'assets/images/proton_cinza.jpg',
            descrição: 'Uma camisa de cor azul com o logo da empresa Próton',
            URL: 'https://www.proton.com/',
            estoque: 100,
            promoção: true,
            detalhes: ['50% algodão', '30% poliéster', '20% lã'],
            cores: [
                { id: 'ED4F13', cor: 'branca', imagem: 'assets/images/proton_branca.jpg'},
                { id: 'ED4F14', cor: 'cinza mescla', imagem: 'assets/images/proton_cinza.jpg'}
            ]
        }
    },
    methods: {
        addCarrinho(){
            this.carrinho ++;
        },
        atualizaImagem(urlImagem){
            this.imagem = urlImagem;
        },
        removeCarrinho(){
            if(this.carrinho > 0){
                this.carrinho --;
            };
        }
    }
})

const mountedApp = app.mount('#app');

