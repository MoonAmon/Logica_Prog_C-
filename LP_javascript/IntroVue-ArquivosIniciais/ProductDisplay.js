import reviewFormComponent from "./ReviewForm.js";
import reviewListComponent from "./ReviewList.js";
import ProductInfo from "./ProductInfo.js";

const productDisplayComponent = {
    props: { 
        premium: { 
        type: Boolean, 
        required: true }
     },
     components: {
        'review-form': reviewFormComponent,
        'review-list': reviewListComponent,
        'product-info': ProductInfo
     },
    template: /*html*/`
        <div class="product-display">
     <div class="product-container">
      <div class="product-image">
        <img :src="imagem" alt="" v-bind:class=" { 'out-of-stock-img': estoque === 0 }">
      </div>
        <div class="product-info" :produto="produto"></div>
    </div>
    <review-list v-if="avaliacoes.length" :avaliacoes="avaliacoes"></review-list>
    <review-form @review-submitted="addAvaliacao"></review-form>
  </div>`,
   data() {
        return {
            carrinho: 0,
            produto: 'Camisa Próton',
            marca: 'GV Verejo',
            imagem: 'assets/images/proton_cinza.jpg',
            descrição: 'Uma camisa de cor azul com o logo da empresa Próton',
            URL: 'https://www.proton.com/',
            estoque: 0,
            produtoSelecionado: 0,
            promoção: true,
            detalhes: ['50% algodão', '30% poliéster', '20% lã'],
            cores: [
                { id: 'ED4F13', cor: '#ffffff', imagem: 'assets/images/proton_branca.jpg', quantidade: 10, price: 45.99},
                { id: 'ED4F14', cor: '#a4a4a6', imagem: 'assets/images/proton_cinza.jpg', quantidade: 10, price: 50.99},
            ],
            avaliacoes: []
        }
    },
    methods: {
        removeCarrinho(){
            this.$emit('remove-carrinho', this.cores[this.produtoSelecionado].id);
        },
        addCarrinho(){
            this.$emit('add-carrinho', this.cores[this.produtoSelecionado].id);
        },
        atualizaProduto(indice){
            this.produtoSelecionado = indice;
        },
        atualizaProdutoSelecionado(indice){
            this.produtoSelecionado = indice;
            this.imagem = this.cores[indice].imagem;
            this.estoque = this.cores[indice].quantidade;
       },
       addAvaliacao(avaliacao){
           this.avaliacoes.push(avaliacao);
       }

    },
    computed: {
        titulo(){
            return this.produto + ' ' + this.marca;
        },
        imagem(){
            return this.cores[this.produtoSelecionado].imagem;
        },
        estoque(){
            return this.cores[this.produtoSelecionado].quantidade;
        },
        frete(){
            if(this.premium){
                return 'Grátis'
            }else{
                return 'R$ 30,00'
            }
        }
    }
}

export default productDisplayComponent